//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
     { if (s==0)
         return {-1};
     }
        long long currSem=arr[0];
        
 for(int i=0,j=1;i<n;){
     if(currSem==s){
         return {i+1,j+1};
     }
     else if(currSem<s && i<j){
         currSem+=arr[++j];
      
     }
     else{
         currSem=currSem-arr[i];
         i++;
     }
    // cout<<" i "<<i<<" j "<<j<<" sum "<<currSem<<endl;
 }

    
    return {-1};
 
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
