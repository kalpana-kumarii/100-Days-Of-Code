//Insert a node in a BST
//https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1?page=1&difficulty[]=0&category[]=Binary%20Search%20Tree&sortBy=submissions

class Solution
{
    public:
        Node* insert(Node* node, int data) {
        
            // Your code goes here
            if(node==NULL)
            return new Node(data);
            
           else if(data<node->data)
            node->left=insert(node->left,data);
           else if(data>node->data)
            node->right=insert(node->right,data);
            
            return node;
         
            
    }

};
