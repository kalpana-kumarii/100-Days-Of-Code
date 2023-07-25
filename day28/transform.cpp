//https://practice.geeksforgeeks.org/problems/transform-string5648/1?page=2&difficulty[]=1&category[]=Strings&sortBy=submissions

class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
      int na=A.length();
      int nb=B.length();
      if(na!=nb){
          return -1;
      }
      
      unordered_map<char,int>m;
      for(auto x:A){
          m[x]++;
      }
     
       for(auto x:B){
          m[x]--;
      } 
      
      for(auto x:m){
          if(x.second!=0){
              return -1;
          }
      }
      int res=0;
      
      int i=na-1;
      int j=nb-1;
      while(i>=0 && j>=0){
          if(A[i]!=B[j]){
             res++;
             i--;
          }
          else{
              i--;
              j--;
          }
      }
      return res;
      
    }
};
