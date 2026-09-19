/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    int countNodes(TreeNode* root) { 
        //your code goes here
        return dfs(root);
    }

    int dfs(TreeNode* root){

        if(root==NULL){
            return 0;
        }

        int left=dfs(root->left);
        int right=dfs(root->right);

        return 1 + (left+right);

    }
};