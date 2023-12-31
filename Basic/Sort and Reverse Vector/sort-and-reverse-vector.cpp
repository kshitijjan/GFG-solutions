//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> sortVector(vector<int>v);
vector<int> reverseVector(vector<int>v);

// } Driver Code Ends
//User function Template for C++

vector<int> sortVector(vector<int>v)
{
    sort(v.begin(), v.end());
    return v;
}
vector<int> reverseVector(vector<int>v)
{
    int start = 0;
    int end = v.size()-1;
    
    while(start<=end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x); //Input vector elements
	    }
	    
	    v=sortVector(v); //sort and store in v
	   
	   for(auto x:v)
	   cout<<x<<" "; //print elements of v
	   cout<<endl; 
	   v=reverseVector(v); //reverse v and store it in v
	   for(auto x:v)
	   cout<<x<<" "; //print elements of v
	   cout<<endl;
	   
	}
	return 0;
}





// } Driver Code Ends