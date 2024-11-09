//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string add(vector<int> &a, vector<int> &b) {
        int n = a.size(), m = b.size();
        reverse(a.begin(), a.end()); 
        reverse(b.begin(), b.end());
        
        int i = 0, j = 0; 
        int carry = 0;
        string ans = "";
        
        while(i < n && j < m) {
            int sum = a[i] + b[j] + carry;
            carry = sum / 10;
            ans.push_back((char)((sum % 10) + '0'));
            ++i; ++j;
        }
        while(i < n) {
            int sum = a[i] + carry;
            carry = sum / 10;
            ans.push_back((char)((sum % 10) + '0'));
            ++i;
        }
        while(j < m) {
            int sum = b[j] + carry;
            carry = sum / 10;
            ans.push_back((char)((sum % 10) + '0'));
            ++j;
        }
        if(carry) {
            ans.push_back((char)((carry % 10) + '0'));
        }
        while(ans.size() > 1 && ans.back() == '0') {
            ans.pop_back();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string minSum(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int> sum1, sum2;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                sum1.push_back(arr[i]);
            } else {
                sum2.push_back(arr[i]);
            }
        }
        return add(sum1,sum2);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends