//{ Driver Code Starts
//Initial Template for Java



import java.util.*;
import java.io.*;

public class Largest_Number_formed_from_an_Array {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            int n = Integer.parseInt(br.readLine().trim());
            String[] arr = br.readLine().trim().split(" ");

            String ans = new Solution().printLargest(n, arr);
            System.out.println(ans);
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
     static boolean func(String a, String b) {
        return (a + b).compareTo(b + a) > 0;
    }
    
    String printLargest(int n, String[] arr) {
        // code here
        List<String> list = Arrays.asList(arr);
        Collections.sort(list, (a, b) -> func(a, b) ? -1 : 1);
        StringBuilder ans = new StringBuilder();
        for (String x : list) {
            ans.append(x);
        }
        
        return ans.toString();
    }
}
