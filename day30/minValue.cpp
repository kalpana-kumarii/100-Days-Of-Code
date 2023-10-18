//inimum element in BST
//https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1?page=1&difficulty[]=-1&category[]=Binary%20Search%20Tree&sortBy=submissions

int minValue(Node* root) {
    // Code here
    if(!root){
        return -1;
    }
    if(root->left==NULL){
        return root->data;
    }
    minValue(root->left);
  
}
