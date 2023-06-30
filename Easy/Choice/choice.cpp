//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> arrayForm(int a, int b, int c) {
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        
        return ans;
    }

    string stringForm(int a, int b, int c) {
        
        string x = to_string(a);
        string y = to_string(b);
        string z = to_string(c);
        string ans = x+y+z;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution obj;
        vector<int> res = obj.arrayForm(a, b, c);
        for (auto x : res) cout << x << " ";
        cout << "\n";
        cout << obj.stringForm(a, b, c) << "\n";
    }
    return 0;
}
// } Driver Code Ends