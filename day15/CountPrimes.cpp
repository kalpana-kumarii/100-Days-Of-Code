
//https://leetcode.com/problems/count-primes/


class Solution {
public:
    int countPrimes(int n) {
         if(n<=2){
            return 0;
        }
        
        int count=0;
        // int temp[n+1]={0};
        vector<bool>temp(n+1,true);

        for(int i=2;i<=sqrt(n);i++){
            for(int j=i*i;j<=n;j+=i){
                temp[j]=false;
            }
        }

        for(int i=2;i<n;i++){
            if(temp[i]){
                count++;
            }
        }
      return count;  
    }
};
