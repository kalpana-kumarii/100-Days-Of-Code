// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min1=INT_MAX;
        int max1=0;
        int res=0;
    int s;
        for(int i=0;i<prices.size();i++){

            if(prices[i]<min1){
                min1=prices[i];
              max1=0;
            }
           else if(prices[i]>max1){
               max1=prices[i];
               if((max1-min1)>res)
               res=max1-min1;
           }
        }

    if(res<=0){
        return 0;
    }
    else
        return res;
    }
};
