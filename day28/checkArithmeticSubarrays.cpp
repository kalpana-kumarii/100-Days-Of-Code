//https://leetcode.com/problems/arithmetic-subarrays/submissions/

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>v;
        int i=0;
        while(i<l.size()){
           int m=l[i];
           int n=r[i];      
          vector<int> dem;
           for(int j=m;j<=n;j++){
                dem.push_back(nums[j]);
           }
             sort(dem.begin(),dem.end());
             bool flag=0;
             int d=dem[1]-dem[0];

           for(int j=2;j<dem.size();j++){               
               if(dem[j]-dem[j-1]!=d){
                flag=1;
                 break;  
               }                
           }
          
           if(flag){
              v.push_back(false);
           }
           else
              v.push_back(true);
              i++;
        }

        return v;
        
    }
};
