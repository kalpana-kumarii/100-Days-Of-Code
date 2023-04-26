//https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1?page=1&difficulty[]=0&category[]=Searching&sortBy=submissions

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        
        int s=0;
        int e=n-1;
        int c=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==0 ){
             c=mid;
               e=mid-1;
            }
            else {
                s=mid+1;
            }
          
        }
        
        return n-c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends
