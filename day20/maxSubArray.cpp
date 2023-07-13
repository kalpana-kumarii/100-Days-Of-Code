// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int currsum=0;
        for(int i=0,j=0;i<nums.size();i++){
            currsum=currsum+nums[i];
           
            if(currsum>sum){
                sum=currsum;
            
            }
           if(currsum<0){
               currsum=0;
           }
            
        
        }

        return sum;
    }
};
