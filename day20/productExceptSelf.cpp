//https://leetcode.com/problems/product-of-array-except-self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1;
        vector<int>v;
        int flag=0;
        int pos;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
            flag++;
            pos=i;
            }
            else
            total*=nums[i];
        }
        if(flag>=2){
           for(int i=0;i<nums.size();i++){
            v.push_back(0);
            } 
          
        }
        else  if(flag==1){
            for(int i=0;i<nums.size();i++){               
                v.push_back(0);             
            }
            v[pos]=total;
          
        }
        else{
            for(int i=0;i<nums.size();i++){               
                    v.push_back(total/nums[i]);             
                }           
                
        }
     return v;
       
    }
};
