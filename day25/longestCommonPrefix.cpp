//https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1?page=1&difficulty[]=0&category[]=Strings&sortBy=submissions

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string s=arr[0];
       
        for(int i=1;i<N;i++){
            string temp="";
            for(int j=0;arr[i][j];j++){
                if(s[j]==arr[i][j]){
                    temp+=arr[i][j];
                    
                }
                else{
                     s=temp;
                    break;
                }
                if(temp.length()==arr[i].length()){
                    s=temp;
                }
                
               // cout<<i<<" "<<temp<<" "<<j<<endl;
            }
            
        }
      
        if(s==""){
            return "-1";
        }
        return s;
    }
};
