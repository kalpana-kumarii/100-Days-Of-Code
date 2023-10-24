
//https://practice.geeksforgeeks.org/problems/print-common-nodes-in-bst/1?page=1&difficulty[]=0&category[]=Binary%20Search%20Tree&sortBy=submissions
class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    
    void bst1(Node *root,map<int,int>&mp){
        if(!root)
        return ;
        
        bst1(root->left,mp);
        mp[root->data]++;
        bst1(root->right,mp);
    }
    void bst2(Node *root,map<int,int>&mp,vector<int>&v){
        if(!root)
        return;
        if(mp[root->data]>=1){
            v.push_back(root->data);
            mp[root->data]--;
        }
        bst2(root->left,mp,v);
        bst2(root->right,mp,v);
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
     //Your code here
     vector<int>v;
     map<int,int>mp;
     bst1(root1,mp);
     bst2(root2,mp,v);
     sort(v.begin(),v.end());
     
     return v;
    }
};
