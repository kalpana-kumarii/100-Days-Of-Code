//https://practice.geeksforgeeks.org/problems/find-the-fine4353/1?page=3&difficulty[]=-1&category[]=Arrays&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
      long esum=0, osum=0;
      for(int i=0;i<n;i++){
          if(car[i]%2==0){
              esum=esum+fine[i];
          }
          else{
              osum=osum+fine[i];
          }
      }
      
     return  (date%2==0)?osum:esum;
      
      
     
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, date;
        cin >> n >> date;
        int car[n], fine[n];
        
        for (i = 0; i < n; i++){
            cin >> car[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> fine[i];
        }
        Solution obj;
        cout << obj.totalFine(n, date, car, fine) << endl;
    }
    return 0;
}

// } Driver Code Ends
