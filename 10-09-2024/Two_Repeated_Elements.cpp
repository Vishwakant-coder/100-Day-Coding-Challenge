//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find two repeated elements.
    vector<int> twoRepeated(int n, int arr[]) {
        // Your code here
    vector<int> result;
    for (int i = 0; i < n + 2; i++) {
        int index = abs(arr[i]) - 1; 
        if (arr[index] < 0) {
            result.push_back(abs(arr[i]));
        } else {
            arr[index] = -arr[index];
        }
        if (result.size() == 2) break;
    }
    
    return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;

        int arr[n + 2];

        for (int i = 0; i < n + 2; i++)
            cin >> arr[i];

        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(n, arr);
        cout << res[0] << " " << res[1] << endl;
    }
    return 0;
}

// } Driver Code Ends