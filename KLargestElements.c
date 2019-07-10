/*
Given an array of N positive integers, print k largest elements from the array.  The output elements should be printed in decreasing order.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N and k, N is the size of array and K is the largest elements to be returned. The second line of each test case contains N input C[i].

Output:
Print the k largest element in descending order.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100
K ≤ N
1 ≤ C[i] ≤ 1000

Example:
Input:
2
5 2
12 5 787 1 23
7 3
1 23 12 9 30 2 50

Output:
787 23
50 30 23

Explanation:
Testcase 1: 1st largest element in the array is 787 and second largest is 23.
Testcase 2: 3 Largest element in the array are 50, 30 and 23.
 */
#include<stdio.h>
void logic(int,int *array,int);
int main(){
    int cases,size,k,i,j;
    //printf("\nEnter Test cases:");
    scanf("%d",&cases);
    for(i=0;i<cases;i++){
        //printf("\nEnter Size of an Array:");
        scanf("%d", &size);
        //printf("\nEnter K:");
        scanf("%d", &k);
        int array[size];
        //printf("\nEnter Array Elements:");
        for(j=0;j<size;j++){
            scanf("%d",&array[j]);
        }
        logic(size,array,k);
    }
    return 0;
}
void logic(int size,int array[size],int k){
    int temp,i,j,l;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(array[i]<array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    //printf("\nResult:");
    for(l=0;l<k;l++){
        printf("%d ",array[l]);
    }
}