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
    int helper(TreeNode* root,int &maxPath){
        if(root==NULL){
            return 0;
        }

        int left=max(0,helper(root->left,maxPath));
        int right=max(0,helper(root->right,maxPath));

        maxPath=max(maxPath,root->data+left+right);

        return root->data + max(left,right);
    }

    int maxPathSum(TreeNode* root) {
        //your code goes here
        int maxPath=INT_MIN;

        helper(root,maxPath);

        return maxPath;
    }
};	