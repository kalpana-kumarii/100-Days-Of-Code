
//https://practice.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1?page=1&difficulty[]=2&category[]=Arrays&sortBy=submissions
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
        int kedans(int arr[], int num){
        int sum=INT_MIN;
        int cur_sum=0;
        for(int i=0;i<num;i++){
            cur_sum= arr[i]+cur_sum;
            if(cur_sum<arr[i]){
                cur_sum=arr[i];
            }
               sum= max(sum,cur_sum);
         }
        
        return sum;
        
    }
    
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int k_val=kedans(arr,num);
        int y=0;
        for(int i=0;i<num;i++){
            y+=arr[i];
            arr[i]*=-1;
        }
        int k2_val=kedans(arr,num);
        if(y+k2_val==0){
            return k_val;
        }
        return max(k_val,k2_val+y);
    
    

    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
