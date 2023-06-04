//Subarray with given sum
// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions
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
        // Your code here
        long long sum=0;
        int l=0,r=0;
        while(r<n && s!=0){
            
           sum+=arr[r];
           while(sum>s){
               sum-=arr[l++];
           }
          if(sum==s){
              return{l+1,r+1};
          }
          
          r++;
           
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
