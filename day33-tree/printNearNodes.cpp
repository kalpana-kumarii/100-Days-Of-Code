//https://practice.geeksforgeeks.org/problems/print-bst-elements-in-given-range/1?page=1&difficulty[]=0&category[]=Binary%20Search%20Tree&sortBy=submissions

class Solution {
  public:
  vector<int>ans;
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here   
        if(!root)
        return ans;
        printNearNodes(root->left,low,high);
        if(root->data>=low && root->data<=high){
           ans.push_back(root->data);
        }
         printNearNodes(root->right,low,high);
         
        return ans;
    }
};
