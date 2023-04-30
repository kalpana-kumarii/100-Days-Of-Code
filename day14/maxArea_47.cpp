//https://practice.geeksforgeeks.org/problems/container-with-most-water0535/1?page=4&difficulty[]=1&category[]=Arrays&sortBy=submissions
//Container With Most Water


//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long arr[], int len)
{
    // Your code goes here
    
    int l=0;
    int r=len-1;
    long long max1=0;
    
    while(l<=r){
        long long lh=arr[l];
        long long rh=arr[r];
        long long min_h=min(lh,rh);
        max1= max(max1, (r-l)*min_h);
        
        if(lh<rh){
            l++;
        }
        else{
            r--;
        }
       
        
    }
    
    return max1;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends
