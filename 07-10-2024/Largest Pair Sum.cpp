//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   int pairsum(vector<int> &arr) {
    int maxi1= INT_MIN, maxi2= INT_MIN;
    for(int i=0;i<arr.size();i++) {
        if(maxi1<arr[i]){
            maxi2=maxi1;
            maxi1=arr[i];
        }else if(maxi2<arr[i] && arr[i]!=maxi1){
            maxi2=arr[i];
        }
    }
    return maxi1 + maxi2;
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
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends