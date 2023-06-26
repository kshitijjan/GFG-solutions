//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here1
        int start = 0;
        int end = n-1;
        int mid = (start+end)/2;
        
        for(int i=0; i<n; i++){
            
            if(k == arr[mid]){
                return mid;
            }
            else if(k>arr[mid]){
                start = mid+1;
            }
            else if(k<arr[mid]){
                end = mid-1;
            }
            mid = (start+end)/2;
        }
        return -1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends