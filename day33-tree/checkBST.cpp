//https://practice.geeksforgeeks.org/problems/check-for-bst/1?page=1&difficulty[]=0&category[]=Binary%20Search%20Tree&sortBy=submissions

class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool checkbst(Node *root,Node *min,Node *max){
        if(!root)
        return true;
        
        if(min!=NULL && root->data<=min->data)
        return false;
        
        if(max && root->data>=max->data)
        return false;
        
        return checkbst(root->left,min,root) && checkbst(root->right,root,max);
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
        
       if( checkbst(root,NULL,NULL))
       return true;
       return false;
   
    }
};
