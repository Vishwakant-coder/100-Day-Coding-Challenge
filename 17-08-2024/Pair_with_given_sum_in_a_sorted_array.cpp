//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPair(int k, vector<int> &arr) {
        // Complete the function
        int count=0;
        int low =0;
        int high = arr.size()-1;
        while(low<high){
            if(arr[low] + arr[high]<k){
                low++;
            }
            else if(arr[low]+arr[high]>k){
                high--;
            }
            else if(arr[low]+arr[high] == k){
                count++;
                low++;
                high--;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        vector<int> arr;
        int k;
        cin >> k;
        string input;
        getline(cin, input);
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.countPair(k, arr) << endl;
    }

    return 0;
}
// } Driver Code Ends