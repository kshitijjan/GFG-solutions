//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    private:
    int min(int A[], int N){
        
        int x = INT_MAX;
        
        for(int i=0; i<N; i++){
            if(x>A[i]){
                x = A[i];
            }
        }
        return x;
    }
    int max(int A[], int N){
        
        int y = INT_MIN;
        
        for(int i=0; i<N; i++){
            if(y<A[i]){
                y = A[i];
            }
        }
        return y;
    }
   public:
    int findSum(int A[], int N)
    {
    	return max(A, N) + min(A, N);
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends