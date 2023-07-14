//https://leetcode.com/problems/valid-parentheses/submissions/

class Solution {
public:
    bool isValid(string s) {
        stack<char>t;
        for(int x:s){
            if(t.empty()){
                t.push(x);
            }            
            else if(t.top()=='(' && x==')' || 
                t.top()=='[' && x==']'  ||
                t.top()=='{' && x=='}'
            )
            {
                t.pop();
            }
            else{
                t.push(x);
            }
        }
        if(t.empty()){
            return 1;
        }
        else{ return 0;}
    }
};
