import java.io.*;
import java.util.*;

public class Solution 
{

    public static void main(String[] args) 
    {
        
        Scanner in = new Scanner (System.in);
            
        int n;
        n=in.nextInt();
        int ctr=0;
        int a [] = new int [n];

            for(int i = 0;i<n;i++)
            {
                a[i]=in.nextInt();
            }
            
            int max= a[0];
            for(int i = 0;i<n;i++)
            {
                if(a[i]>max)
                {
                    max=a[i];
                }
            }
            for(int i = 0;i<n;i++)
            {
                if(a[i]== max)
                {
                    ctr++;
                }
            }
                
            
            
            System.out.println(ctr);
    }
}