//https://practice.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1?page=1&difficulty[]=1&category[]=Strings&sortBy=submissions

class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        
        
        int arr[256]={0};
        int n=S.length();
        int ans=0;
         
     int i=0;
     int j=0;
     while(i<n){
     
        if(arr[S[i]]==1){
             ans=max(ans,(i-j));
             int t=j;
            
             while(arr[S[i]]==1){
               
                 arr[S[t]]--;
                  
                 t++;
             }
             j=t;
             
           //   cout<<ans<<" i: "<<i<<" j: "<<j<<" t "<<t<<endl;
         }
             arr[S[i]]++;
             i++;
        
         
     }
  
     
        return max(ans,(i-j));
        
    }
};
