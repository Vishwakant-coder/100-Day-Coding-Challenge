//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long maxSum(int n, int x, vector<int> &arr) {
        // code here
     vector<int> setBitNumbers;  
    vector<int> unsetBitNumbers;
    for (int num : arr) {
        if (num & (1 << (x-1))) {
            setBitNumbers.push_back(num); 
        } else {
            unsetBitNumbers.push_back(num);
        }
    }
    
    if (setBitNumbers.empty() || unsetBitNumbers.empty()) {
        return -1;
    }
    
    int maxSetBit = *max_element(setBitNumbers.begin(), setBitNumbers.end());
    int maxUnsetBit = *max_element(unsetBitNumbers.begin(), unsetBitNumbers.end());
    
    return maxSetBit + maxUnsetBit;

    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        long long res = obj.maxSum(n, x, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends