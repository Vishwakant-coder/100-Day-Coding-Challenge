//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> mat) 
    {
        // Code here
        vector<int> ans;
        int n = mat.size();
        int i = 0, j = 0;

        while(i < n && j < n) {
            int x = i, y = j;
            ans.push_back(mat[x][y]);

            while(x+1 < n && y-1 >= 0) {
                ans.push_back(mat[x+1][y-1]);
                x++; y--;
            }

            if(j == n-1)
                i++;
            else
                j++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends