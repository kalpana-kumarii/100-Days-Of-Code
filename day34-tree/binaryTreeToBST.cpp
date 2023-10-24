//https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1?page=1&difficulty[]=0&category[]=Binary%20Search%20Tree&sortBy=submissions
class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
void  btToBST(Node *root,vector<int>&v){
      if(!root)
        return;
       btToBST(root->left,v);
        v.push_back(root->data);
        btToBST(root->right,v);
        
 }
 void in(Node *root,vector<int>v,int &i){
      if(!root)
        return;
      in(root->left,v,i);
       root->data=v[i];
       i++;
    in(root->right,v,i);
      
 }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
           vector<int>v;
           btToBST(root,v);
        sort(v.begin(),v.end());
        int i=0;
        in(root,v,i);
        
        return root;
    }
};
