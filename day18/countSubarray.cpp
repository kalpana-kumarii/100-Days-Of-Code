//Count the number of subarrays
//https://practice.geeksforgeeks.org/problems/count-the-number-of-subarrays/1?page=1&difficulty[]=2&category[]=Arrays&sortBy=submissions
//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
  
   long long count(int N, vector<int> A,long long x){
       long long sum=0;
        long long l=0;
        long long r=0;
         long long c=0;
           while(r<N){
            sum=sum+A[r];
            while(sum>x ){
             sum=sum-A[l];
             l++;
            }
             c=c+1+r-l;
            r++;
          
        }
         return c;
    }
  
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
        // code here
        long long ans1=count(N,A,R);
        long long ans2= count(N,A,L-1);
        long long res=ans1-ans2;
       
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        long long L,R;
        cin>>N>>L>>R;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,L,R);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends
