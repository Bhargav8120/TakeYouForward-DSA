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
        vector<int> result;

        TreeNode* curr=root;

        while(curr!=NULL){
            if(curr->left==NULL){
                result.push_back(curr->data);
                curr=curr->right;
            }
            else{

                TreeNode* leftGuy=curr->left;

                while(leftGuy->right && leftGuy->right!=curr){
                    leftGuy=leftGuy->right;
                }

                if(leftGuy->right==NULL){
                    leftGuy->right=curr;
                    curr=curr->left;
                }
                else{
                    leftGuy->right==NULL;
                    result.push_back(curr->data);
                    curr=curr->right;
                }
            }
        }
        return result;
    }
};