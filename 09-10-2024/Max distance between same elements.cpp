//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        unordered_map<int,int>first;
        unordered_map<int,int>last;
        int n = arr.size();
        int ans = -1;
        for(int i=0;i<n;i++){
            if(first.find(arr[i]) == first.end()){
                first[arr[i]] = i;
            }
            last[arr[i]] = i;
            ans = max(ans,last[arr[i]] - first[arr[i]]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends