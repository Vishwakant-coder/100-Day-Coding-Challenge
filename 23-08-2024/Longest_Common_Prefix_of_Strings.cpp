//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n=arr.size();
        string ans="";
        string str1=arr[0];
        for(int j=0;j<n;j++){
            ans="";
            string str2=arr[j];
            for(int i=0;i<min(str1.size(),str2.size());i++){
                if(str1[i]==str2[i]){
                    ans+=str1[i];
                }else{
                    break;
                }
            }
            if(ans==""){
                return "-1";
                }else{
                    str1=ans;
                }
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
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends