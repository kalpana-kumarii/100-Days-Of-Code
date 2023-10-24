//https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1?page=1&difficulty[]=0&category[]=Binary%20Search%20Tree&sortBy=submissions

class Solution
{
    public:
    
   int kth(Node *root,int &i,int &k){
        if(!root)
        return 0;
        kth(root->right,i,k);
       //cout<<root->data<<" "<<k<<endl;
   
        if(k==1)
      {  i=max(i, root->data);  }
        else
       {    k--;
       }
       kth(root->left,i,k);
       
       return i;
        
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int i=INT_MIN;
       return kth(root,i,K);
        
    }
};
