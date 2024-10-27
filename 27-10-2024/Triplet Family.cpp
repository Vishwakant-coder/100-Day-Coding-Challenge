//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    bool twoSum(const std::vector<int>& arr, int key) {
        int i = 0, j = arr.size() - 1;
        while (i < j) {
            int temp = arr[i] + arr[j];
            if (temp == key) {
                return true;
            } else if (temp < key) {
                i++;
            } else {
                j--;
            }
        }
        return false;
    }
    
    bool findTriplet(vector<int>& arr) {
        // Your code
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            if (twoSum(arr, arr[i])) {
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        bool res = obj.findTriplet(arr);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        // cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends