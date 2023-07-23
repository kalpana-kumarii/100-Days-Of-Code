
//https://practice.geeksforgeeks.org/problems/meta-strings5713/1?page=4&difficulty[]=0&category[]=Strings&sortBy=submissions
bool metaStrings (string S1, string S2)
{
    // your code here
    char t1;
    char t2;
    int f1=-1;
    int f2=-1;
    int c=0;
    for(int i=0;i<S1.length();i++){
        if(S1[i]!=S2[i]){
            t1=S1[i];
            t2=S2[i];
            f1=i;
            break;
        }
        else{
            c++;
        }
    }
      
    if(c==S1.length()){
        return 0;
    }
  
    else{
    int l,m;
    for(int i=f1;i<S1.length();i++){
        if(S1[i]==t1 && S1[i]!=S2[i]){
            l=i;
        }
        if(S1[i]==t2 &&  S1[i]!=S2[i]){
            m=i;
        }
    }  
    ;
    char temp=S1[l];
    S1[l]=S1[m];
    S1[m]=temp;
    
  
    } 
    
    
    c=0;
    for(int i=0;i<S1.length();i++){
        if(S1[i]==S2[i]){
        c++;
        }
        else{
            c=0;
        }
      
    }
    if(c==S1.length())
    return 1;
    else
    return 0;
}
