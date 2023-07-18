//https://leetcode.com/problems/3sum/description/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        set<vector<int>> set;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                //  int sum=nums[i]+nums[j]+nums[k];
                if((nums[i]+nums[j]+nums[k])==0){
                    set.insert({nums[i],nums[j],nums[k]});
                   
                    j++;
                    k--;
                }
                else if((nums[i]+nums[j]+nums[k])>0){
                    k--;
                }
                else{
                
                    j++;
                }
            }

        }
    for(auto it : set){
            v.push_back(it);
        }
        return v;
    }
};
