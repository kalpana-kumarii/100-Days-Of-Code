//https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1?page=1&difficulty[]=-1&category[]=Strings&sortBy

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
   
        unordered_map<char,int>m;
        
        for(auto x:str){
            m[x]++;
        }
        int c=0;
         char k=m.begin()->first;
        for(auto x:m){
          int temp=x.second;
          
       // cout<<x.first<<" "<<x.second<<endl;
            if(temp==c){
                  if(x.first<k)
                  k=x.first;
             }
           else  if(temp>c){
              c=temp;
              k=x.first;
          }
        }
        
        return k;
    }

};
