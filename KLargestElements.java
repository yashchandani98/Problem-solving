import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.*; 
class KLargestElements { 
    public static void main(String args[]) 
    {
    	Scanner s=new Scanner(System.in);
    	int t=s.nextInt();
    	int n,k;
    	for(int i=0;i<t;i++)
    	{
    		 n=s.nextInt();
    		 k=s.nextInt();
    		 PriorityQueue<Integer> pQueue = new PriorityQueue<Integer>();
    		for(int j=0;j<k;j++)
    		{
    			pQueue.add(s.nextInt());
    			
    		}
    		for(int j=k;j<n;j++)
    		{
    			pQueue.add(s.nextInt());
    			pQueue.poll();	
    		}
        int a[]=new int[k];
        int l=0;
             while (!pQueue.isEmpty())
             {
                a[l]= pQueue.remove();
                l++;
             }
            for (int j = a.length-1; j >= 0; j--) 
             {System.out.print(a[j]+" ");}
           System.out.println();
    	}
    }
}
    