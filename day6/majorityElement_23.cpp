//https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
        // your code here
        if(size==1){
            return arr[0];
        }
       int count=0, cand=-1;
       for(int i=0;i<size;i++){
           if(count==0){
               cand=arr[i];
               count=1;
           }
           else{
                if(cand==arr[i]){
                   count++;
               }
               else{
                 
                   count--;
                }
           }
       }
    
           int ele=0;
           for(int i=0;i<size;i++){
               if(arr[i]==cand){
                   ele++;
               }
           }

           if(ele>(size/2)){
               return cand;
           }
           else{
               return -1;
           }
       
       
        
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends
