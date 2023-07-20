//https://practice.geeksforgeeks.org/problems/anagram-of-string/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions

int remAnagram(string str1, string str2)
{
// Your code goes here
        unordered_map<char,int>m1;
       
        for(auto x:str1){
            m1[x]++;
        }
          for(auto x:str2){
            m1[x]--;
        }
        
        int ans=0;
        for(auto i : m1){
        
        ans =ans+ abs(i.second);
         }

        return ans;
}
