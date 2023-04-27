//First and last occurrences of X

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int search(vector<int> &arr,int n,bool p,int x){
     
    //   cout<<s<<" "<<e<<" "<<p<<" "<<x<<endl;
    int ans=-1;
    int s=0;
    int e=n-1;
      while(s<=e){
           int  mid=(s+e)/2;
             
            if(arr[mid]>x){
                e=mid-1;
            }
            else if(arr[mid]<x){
                s=mid+1;
            }
            else {
               
                if(p && arr[mid]==x){
                     ans=mid;
                    e=mid-1;
                }
                if(p==false && arr[mid]==x){
                     ans=mid;
                    s=mid+1;
                }
            }
            //  cout<<mid<<" "<<arr[mid]<<" "<<arr[ans]<<" "<<ans<<endl;
            
        }
        
      
        return ans;
  }
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int first=-1;
        int second=-1;

      
        first=search(arr,n,true,x);
      
        second=search(arr,n,false,x);  
        
    //   cout<<first<<" "<<second<<endl;
        
        if(first!=-1 && second!=-1)
              {  
                  return {first,second};
                  
              }
        else
            {   
                return {-1};
                
            }
        
    }
    
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends
