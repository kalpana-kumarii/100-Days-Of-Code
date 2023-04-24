//https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1?page=2&difficulty[]=1&category[]=Arrays&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	   
	
	 sort(arr,arr+n);
	 int c=0;
	for(int i=0;i<n-2;i++){
	    int j=i+1;
	    int k=n-1;
	    while(j<k){
	        long long res=arr[i]+arr[j]+arr[k];
	        if(res<sum){
	            c=c+(k-j);
	            j++;
	        }
	        else{
	            k--;
	        }
	       
	    }
	}
	    
	   return c;
	}
		 

};

//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
