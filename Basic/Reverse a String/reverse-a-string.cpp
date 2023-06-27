//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  stack<char> c;
  string reverse = "";
  for(int i=0; i<str.length(); i++){
      c.push(str[i]);
  }
  
  while(!c.empty()){
      reverse.push_back(c.top());
      c.pop();
  }
    return reverse;
}



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends