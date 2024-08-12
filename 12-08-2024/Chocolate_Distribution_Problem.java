//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
class Chocolate_Distribution_Problem
{
    public static void main (String[] args)
    {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            ArrayList<Integer> arr = new ArrayList<>();
            for(int i = 0;i<n;i++)
                {
                    int x = sc.nextInt();
                    arr.add(x);
                }
            int m = sc.nextInt();
            
            Solution ob = new Solution();
            
    		System.out.println(ob.findMinDiff(arr,n,m));
        }
        
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    public long findMinDiff (ArrayList<Integer> a, int n, int m)
    {
        // your code here
        Collections.sort(a);
        int curr =0;
        curr = a.get(m-1) - a.get(0);
        int res = curr;
        for (int i = m; i<n; i++)
        {
            curr = a.get(i)- a.get((i-m)+1);
            res = Math.min(res, curr);
        }
        return res;
    }
}