
//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=1&difficulty[]=1&category[]=Arrays&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int v[2]={0};
        int hash[n+1]={0};
        for(int i=0;i<n;i++){
           hash[arr[i]]+=1;
        }
      
        for(int i=1;i<=n;i++){
            if(hash[i]==0){
              v[1]=i;
            }
            if(hash[i]>1){
                v[0]=i;
            }
        }
        
     int *v1=v;
     return v1;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
