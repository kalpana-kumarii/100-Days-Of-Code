https://practice.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1?page=1&difficulty[]=-1&category[]=Searching&sortBy=submissions
//Count zeros in a sorted matrix


////{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		//code here
		int c=0;
		int row=0;
		int n=A[0].size();
		int col=n-1;
		while(row<A[0].size()){
		    if(A[row][col]==0){
		        c=c+col+1;
		        row++;
		        col=n-1;
		    }
		    else{
		        col--;
		    }
		}
		
		return c;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends
