//https://practice.geeksforgeeks.org/problems/perfect-binary-tree/1?page=3&difficulty[]=0&category[]=Tree&sortBy=submissions

class Solution
{
public:
int height(Node *root){
    if(!root)
    return 0;
    
    int l=height(root->left);
    int r=height(root->right);
    
    return  max(l+1,r+1);
}

int levelor(Node *root,int level,int &s){
    if(!root)
    return 0;
    if(level==0){
        s++;
        return s;
    }
    levelor(root->left,level-1,s);
    levelor(root->right,level-1,s);
}
    bool isPerfect(Node *root)
    {
        //code here
    int h=height(root);
    for(int i=0;i<h;i++){
        int s=0;
      levelor(root,i,s);
      if(s!=pow(2,i)){
          return false;
      }
    }
    
    return true;
    }
};
