//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string t="";
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            t+=s[i];
        }
         int k=0;
         int j=0;
         int i=0;
      
       while(j<n){
          
            while(t[j]!='.' && t[j]!='\0'){
                j++;
            }
            k=j;
            j--;
            while(i<=j){
              int temp=t[i];
              t[i]=t[j];
              t[j]=temp;
             i++;
             j--;
            }
            j=k+1;
            i=k+1;
        }
        
       return t; 
    } 
