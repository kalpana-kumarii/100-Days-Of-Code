//https://practice.geeksforgeeks.org/problems/1e2f365be6114b671b915e145ec7dbcfdc432910/1?page=2&difficulty[]=1&category[]=Strings&sortBy=submissions

class Solution {
  public:
    string removeReverse(string S) {
        // code here
        int dir=0; //not reverse
        unordered_map<char,int>mp;
        for(auto x:S)
        {
            mp[x]++;
        }
        
        int s=0;
        int e=S.length()-1;
        
        while(s<=e){
            if(dir==0){
                if(mp[S[s]]==1){
                    s++;
                }
                else{
                    mp[S[s]]--;
                    S[s]='#';
                    dir=1;
                    s++;
                }
            }
            else{
                if(mp[S[e]]==1){
                    e--;
                }
                else{
                    mp[S[e]]--;
                    S[e]='#';
                    e--;
                    dir=0;
                }
            }
        }
        
        string ans="";
        for(auto x:S){
            if(x!='#'){
                ans+=x;
            }
        }
        
        if(dir){
           int i=0;
           int j=ans.length()-1;
           while(i<=j){
               char temp=ans[i];
               ans[i]=ans[j];
               ans[j]=temp;
               i++;
               j--;
           }
        }
        return ans;
    }
};
