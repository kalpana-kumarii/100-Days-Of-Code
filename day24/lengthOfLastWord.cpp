//https://leetcode.com/problems/length-of-last-word/description/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        if(n==1){
            return 1;
        }
        int c=0;
        int i;
        for(i=n-1;i>=0;i--){
            if(s[i]!=' ')
            break;
        }
        cout<<i;
        while(i>=0){
            if(s[i]!=' '){
            c++;
            i--;
            }
            else{
                break;
            }
        } 
      return c;  
    }
};
