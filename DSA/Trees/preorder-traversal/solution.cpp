/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
	public:

        void preorderTreaversal(TreeNode* root,vector<int> &result){
            if(root==NULL){
                return;
            }

            result.push_back(root->data);

            preorderTreaversal(root->left,result);

            preorderTreaversal(root->right,result);
        }
		vector<int> preorder(TreeNode* root){
	       //your code goes here
           vector<int> result;

           preorderTreaversal(root,result);

           return result;
		}
};