
//https://practice.geeksforgeeks.org/problems/merge-two-strings2736/1?page=1&difficulty[]=-1&category[]=Strings&sortBy=submissions
string merge (string S1, string S2)
{
    // your code here
    string t="";
    int l=S1.length();
    int m=S2.length();
    int n=l<m?l:m;
    int i;
    for( i=0;i<n;i++ )
      t=t+S1[i]+S2[i];
    if(i<l){
    for( int j=i+1;i<l;i++ )
      t=t+S1[i];
    }
    else{
        for(int j=i+1;i<m;i++ )
      t=t+S2[i];
    }
    
    
    
    return t;
}
