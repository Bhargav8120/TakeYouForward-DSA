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
    bool mirror(TreeNode* n1,TreeNode* n2){

        if(n1==NULL && n2==NULL){
            return true;
        }

        if(n1==NULL || n2==NULL){
            return false;
        }
        if(n1->data != n2->data){
            return false;
        }

        return mirror(n1->left,n2->right) && mirror(n1->right , n2->left);
    }


    bool isSymmetric(TreeNode* root) {
        //your code goes here
       if(root==NULL){
        return true;
       }

        return mirror(root->left,root->right);
    }
};