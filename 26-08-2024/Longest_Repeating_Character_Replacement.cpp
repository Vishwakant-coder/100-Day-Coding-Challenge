//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string s, int k) {
        // code here
        vector<int> mp(26,0);
        int i=0,j=0,n=s.size(),maxlen=INT_MIN,mostfreqchar=0;
        while(j<n){
            mp[s[j]-'A']++;
            mostfreqchar=max(mostfreqchar,mp[s[j]-'A']);
            int charstochange=(j-i+1)-mostfreqchar;
            if(charstochange<=k){
                maxlen=max(maxlen,j-i+1);
            }
            else{
                mp[s[i]-'A']--;
                i++;
            }
            j++;
        }
        return maxlen;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends