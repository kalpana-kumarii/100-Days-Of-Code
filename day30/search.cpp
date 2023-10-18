//https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1?page=1&difficulty[]=-1&category[]=Binary%20Search%20Tree&sortBy=submissions

bool search(Node* root, int x) {
    // Your code here
    
    if(!root){
        return 0;
    }
    if(root->data==x){
        return 1;
    }
    if(root->data>x ){
        search(root->left,x);
    }
    else{
        search(root->right,x);
    
