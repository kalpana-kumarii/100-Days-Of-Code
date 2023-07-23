//https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions

int longestSubstrDistinctChars (string S)
{
    // your code here
    
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
