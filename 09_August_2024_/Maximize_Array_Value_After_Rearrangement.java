//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

public class Maximize_Array_Value_After_Rearrangement {
    public static void main(String args[]) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);

        int t = Integer.parseInt(in.readLine().trim());
        while (t-- > 0) {
            String line = in.readLine();
            String[] tokens = line.split(" ");

            // Create an ArrayList to store the integers
            ArrayList<Integer> array = new ArrayList<>();

            // Parse the tokens into integers and add to the array
            for (String token : tokens) {
                array.add(Integer.parseInt(token));
            }

            int[] arr = new int[array.size()];
            int idx = 0;
            for (int i : array) arr[idx++] = i;

            // int key = Integer.parseInt(in.readLine().trim());

            out.println(new Solution().Maximize(arr));
        }
        out.close();
    }
}
// } Driver Code Ends


// User function Template for Java
class Solution {

    int Maximize(int arr[]) {
        // Complete the function
        MergeSort ms = new MergeSort();
        int n = arr.length;
        ms.mergeSort(arr,0,n-1);
        long sum=0;
        final int MOD = 1000000007;
        
        for(int i=0;i<n;i++){
            sum = (sum + (long)arr[i]*i)%MOD;
        }
        return (int)sum ;
    }
}

 class MergeSort {

    public void merge(int[] arr, int low, int mid, int high) {
        List<Integer> temp = new ArrayList<>();
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.add(arr[left]);
                left++;
            } else {
                temp.add(arr[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.add(arr[left]);
            left++;
        }

        while (right <= high) {
            temp.add(arr[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = temp.get(i - low);
        }
    }

    public void mergeSort(int[] arr, int low, int high) {
        if (low >= high) return;
        MergeSort ms1 = new MergeSort();
        int mid = (low + high) / 2;
        ms1.mergeSort(arr, low, mid);
        ms1.mergeSort(arr, mid + 1, high);
        ms1.merge(arr, low, mid, high);
    }

}