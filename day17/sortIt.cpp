//Sort in specific order
//https://practice.geeksforgeeks.org/problems/sort-in-specific-order2422/1?page=1&difficulty[]=-1&category[]=Sorting&sortBy=submissions
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        long long hash[n];
        int j=n-1;
        int k=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2){
                hash[k++]=arr[i];
            }
            else{
                hash[j--]=arr[i];
            }
        }
        sort(hash, hash+k,greater<int>());
        sort(hash+j+1,hash+n);
        for(int i=0;i<n;i++){
            arr[i]=hash[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
