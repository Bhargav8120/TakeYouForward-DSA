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

        void postorderTraversal(TreeNode* root,vector<int> &result){
            if(root==NULL){
                return;
            }

            postorderTraversal(root->left,result);

            postorderTraversal(root->right,result);

            result.push_back(root->data);
        }

		vector<int> postorder(TreeNode* root){
	        //your code goes here
            vector<int> result;

            postorderTraversal(root,result);

            return result;
		}
};