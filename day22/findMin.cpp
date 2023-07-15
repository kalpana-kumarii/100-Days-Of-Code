//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
public:
    int findMin(vector<int>& nums) {
     int n = nums.size();
       int ans=0;
          if(nums[0]<=nums[n-1]) {
            return nums[0];
        }
      //1st method 
        // for(int i=0; i<n-1; i++)
        // {
        //     if(nums[i] > nums[i+1]) {
        //        ans = nums[i+1];
                
        //     }
        // }
    ///2nd method
        int s=0;
        int e=nums.size()-1;
    
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                ans=nums[mid];
                e=mid-1;
            }
        }
      

        return ans;
    }
};
