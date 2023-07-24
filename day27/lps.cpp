//https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1?page=1&difficulty[]=1&category[]=Strings&sortBy=submissions

class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	    int n=s.length();
	    int arr[n]={0};
	    int i=1;
	    int j=0;
	    while(i<n){
	        if(s[i]==s[j]){
	             arr[i]=j+1;
	             i++;
	             j++;
	        }
	        else{
	            if(j==0){
	              i++;
	            }
	            else{
	               j=arr[j-1];
	            }
	        }
	    }
	    
	    return j;
	}
};
