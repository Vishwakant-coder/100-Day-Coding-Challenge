//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
         int z=0, o=0, t=0;
        for(int i=0; i<arr.size(); ++i){
            z+=(arr[i]==0);
            o+=(arr[i]==1);
            t+=(arr[i]==2);
        }
        int f=0;
        if(z>0) f=0;
        else if(o>0) f=1;
        else f=2;
        for(int i=0; i<arr.size(); ++i){
            if(f==0){
                if(z>0){
                    z--; 
                    arr[i]=0;}
                if(z==0){
                    if(o>0)
                        f=1;
                    else if(t>0)
                        f=2;
                }
            }
            else if(f==1){
                if(o>0){
                    o--;
                    arr[i]=1;}
                if(o==0)
                    f=2;
            }
            else{
                if(t>0){
                    t--;
                    arr[i]=2;}
            }
        }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends