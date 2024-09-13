//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int> n,p;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                n.push_back(arr[i]);
            }else{
                p.push_back(arr[i]);
            }
        }
        int j = 0, k = 0, idx = 0;
        while(j < p.size() && k < n.size()) {
            arr[idx++] = p[j++];
            arr[idx++] = n[k++];
        }
        while(j < p.size()) {
            arr[idx++] = p[j++];
        }
        while(k < n.size()) {
            arr[idx++] = n[k++];
        }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends