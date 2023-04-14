//https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=submissions

//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
    
        // Your code here
        if(n==1){
            return 1;
        }
        int preSum[n];
        preSum[0]=a[0];
        for(int i=1;i<n;i++){
           preSum[i]=a[i]+preSum[i-1]; 
        }
        int totalSum=preSum[n-1];
        // for(int i=0;i<n;i++){
        //     cout<<preSum[i]<<" ";
        // }
        // cout<<endl;
        // cout<<totalSum<<endl;
        for(int i=1;i<n;i++){
        //   cout<<preSum[i-1]<<" "<<(totalSum-preSum[i])<<" "<<preSum[i]<<" "<<i<<endl;
            if(preSum[i-1]==(totalSum-preSum[i])){
                return i+1;
            }
        }
        
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
