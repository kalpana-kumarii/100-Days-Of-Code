//https://practice.geeksforgeeks.org/problems/last-index-of-15847/1?page=1&difficulty[]=-1&category[]=Searching&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lastIndex(string s) 
    {
        int idx=-1;
       for(int i=0 ;i<s.length();i++){
           if(s[i]=='1'){
               idx=i;
           }
           
       }
       return idx; 
    }

};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
