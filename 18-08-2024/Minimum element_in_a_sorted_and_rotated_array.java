//{ Driver Code Starts
//Initial Template for Java

import java.util.*;

public class Minimum_element_in_a_sorted_and_rotated_array
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        while (t-- > 0)
        {
            int n = sc.nextInt();
            int A[] = new int[n];
            
            for (int i = 0;i < n;i++)
            {
                A[i] = sc.nextInt();
            }
            
            Solution sol = new Solution();
            System.out.println(sol.findMin(A, n));
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    int findMin(int arr[], int n)
    {
        //complete the function here
        
        int ans = Integer.MAX_VALUE;
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[low] <= arr[mid]) {
                ans = Math.min(arr[low], ans);
                low = mid + 1;
            } else {
                ans = Math.min(arr[mid], ans);
                high = mid - 1;
            }
        }

        return ans;
    
    }
}
