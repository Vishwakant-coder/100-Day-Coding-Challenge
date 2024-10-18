//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        if(str[str.size()-1]<='5')
        return str.substr(0,str.size()-1) + "0";
        bool carry = true;
        str[str.size()-1] = '0';
        for(int i=str.size()-2;carry && i>=0;i--){
            if(str[i]=='9'){
                str[i] = '0';
                carry = true;
            }
            else{
                str[i] += 1;
                carry = false;
            }
        }
        if (carry)
            return "1" + str;
        else
            return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends