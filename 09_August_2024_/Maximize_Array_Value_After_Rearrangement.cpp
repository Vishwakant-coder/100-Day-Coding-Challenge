//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void merge(vector<int> &arr, int low, int mid, int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }

    void mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    int Maximize(vector<int> &arr)
    {
        // Complete the function
        const int MOD = 1000000007;
        int n = arr.size();
        long long sum = 0;
        mergeSort(arr, 0, n - 1);
        // sort(arr.begin(),arr.end()); ?? also use sort function

        for (int i = 0; i < n; i++)
        {
            sum = sum + ((long long)arr[i] * i);
        }
        return sum % MOD;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
// } Driver Code Ends