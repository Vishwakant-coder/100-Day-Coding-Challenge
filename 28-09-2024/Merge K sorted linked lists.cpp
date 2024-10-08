//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    
    Node *merge(Node *head1, Node *head2){
        Node *head = new Node(0);
        Node *tail = head;
      
        while(head1&&head2){
            if(head1->data<=head2->data){
                tail->next = head1;
                head1 = head1->next;
                tail = tail->next;
                tail->next = NULL;
            }
          else{
                tail->next = head2;
                head2 = head2->next;
                tail = tail->next;
                tail->next = NULL;
            }
        }
        if(head1)
            tail->next = head1;
        else
            tail->next = head2;
        return head->next;
    }
     
     
    void mergeSort(vector<Node*>& arr,int start,int end){
        if(start>=end)
            return;
         
        int mid = start+(end-start)/2;
         
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
         
        arr[start] = merge(arr[start],arr[mid+1]);
    }
     
    // Function to merge K sorted linked list.
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        int k = arr.size();
        
        mergeSort(arr,0,k-1);
        
        return arr[0];
    }
};


//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<Node*> arr;
        vector<int> nums;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            nums.push_back(number);
        }
        int ind = 0;
        int N = nums.size();

        while (ind < N) {
            int n = nums[ind++];
            int x = nums[ind++];
            Node* head = new Node(x);
            Node* curr = head;
            n--;

            for (int i = 0; i < n; i++) {
                x = nums[ind++];
                Node* temp = new Node(x);
                curr->next = temp;
                curr = temp;
            }
            arr.push_back(head);
        }

        Solution obj;
        Node* res = obj.mergeKLists(arr);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends