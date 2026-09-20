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
    vector<int> getInorder(TreeNode* root) {
    	//your code goes here
        vector<int> inorder;

        TreeNode* curr = root;

        while(curr!=NULL){
            if(curr->left==NULL){
                inorder.push_back(curr->data);
                curr=curr->right;
            }
            else{
                TreeNode* prev = curr->left;

                while(prev->right && prev->right!=curr){
                    prev=prev->right;
                }

                if(prev->right==NULL){
                    prev->right=curr;
                    curr=curr->left;
                }
                else{
                    prev->right=NULL;
                    inorder.push_back(curr->data);
                    curr=curr->right;
                }
            }
        }
        return inorder;
    }
};