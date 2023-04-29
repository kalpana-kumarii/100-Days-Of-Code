//Min Subsets with Consecutive Numbers
//https://practice.geeksforgeeks.org/problems/min-subsets-with-consecutive-numbers0601/1?page=3&difficulty[]=0&status[]=solved&category[]=Arrays&sortBy=submissions
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int numofsubset(int arr[], int n)
    {
        // Your code goes here
        int c=1;
        sort(arr,arr+n);
        
        for(int i=0;i<n-1;i++){
            if(arr[i]+1!=arr[i+1]){
                c++;
            }
        }
        
        return c;
    }
};

//{ Driver Code Starts.
// Driven Program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n+1];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
        Solution ob;
	    cout << ob.numofsubset(arr, n) << endl;
	}
	return 0;
}

// } Driver Code Ends
