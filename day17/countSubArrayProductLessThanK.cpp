//Count the subarrays having product less than k

//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1?page=1&difficulty[]=2&category[]=Arrays&sortBy=submissions
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        
        if(k==1){
            return 0;
        }
        int c=0;
        long long prod=1;
        int j=0;
        int i=0;
        for(i=0;i<n;i++){
            prod*=arr[i];
            while(prod>=k){
                prod=prod/arr[j];
                j++;
            }
           
            c=c+i-j+1;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends
