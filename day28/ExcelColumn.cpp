//https://practice.geeksforgeeks.org/problems/excel-sheet5448/1?page=2&difficulty[]=1&category[]=Strings&sortBy=submissions

class Solution{
    public:
    string ExcelColumn(int N)
    {
        // Your code goes here
        
        string ans="";
        
        while(N){
            int rem=N%26;
            
            if(rem==0){
                ans='Z'+ans;
                N=(N/26)-1;
              
            }
            else{
                char c=rem-1+'A';
                ans=c+ans;
                N=N/26;
               
        }
        
        
        return ans;
    }
