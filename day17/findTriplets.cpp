//Find triplets with zero sum
//https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1?page=1&difficulty[]=-1&category[]=Sorting&sortBy=submissions
//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        
        sort(arr,arr+n);
        int i=0;
        int j;
        int k=1;
        int sum=INT_MAX;
        
        for(i=0;i<n-2;i++){
            j=i+1;
            k=n-1;
            int sum;
            while(j<k){
               sum=arr[i]+arr[j]+arr[k];
               if(sum==0){
                   return 1;
               }
               else if(sum>0){
                   k--;
               }
               else{
                   j++;
               }
            }
        }
        
        return 0;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends
