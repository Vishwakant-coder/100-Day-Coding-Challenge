//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<char>S;
        for (int i=0; i<s.length(); i++){
            char ch= s[i];
            if(ch=='(' or ch=='+' or ch=='-' or ch=='/' or ch=='*'){
                S.push(ch);
            }
            else{
                if(ch==')'){
                    bool flag= true;
                    while( S.top()!= '(' ){
                        char top= S.top();
                        if(top=='+' or top=='-' or top=='*' or top=='/'){
                           flag= false;
                        }
                        S.pop();
                    }
                    if(flag==true){
                        return 1;
                    }
                    S.pop();
                }
            }
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        string s;
        cin >> s;

        Solution obj;
        int res = obj.checkRedundancy(s);

        cout << res << endl;
    }
}

// } Driver Code Ends