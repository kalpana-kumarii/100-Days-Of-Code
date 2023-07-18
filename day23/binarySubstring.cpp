//https://practice.geeksforgeeks.org/problems/binary-string-1587115620/1?page=1&difficulty[]=-1&category[]=Strings&sortBy

class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        // Your code here
        int c=0;
        for(auto x:a){
            if(x=='1') c++;
        }
        
         return c*(c-1)/2;
    }
    
   
};
