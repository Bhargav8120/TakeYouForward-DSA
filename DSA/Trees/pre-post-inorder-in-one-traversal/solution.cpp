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
        void preorder(TreeNode* root,vector<int> &result){
            if(root==NULL){
                return;
            }

            result.push_back(root->data);

            preorder(root->left,result);

            preorder(root->right,result);
        }

        void postorder(TreeNode* root,vector<int> &result){
            if(root==NULL){
                return;
            }

            postorder(root->left,result);

            postorder(root->right,result);

            result.push_back(root->data);
        }

        void inorder(TreeNode* root,vector<int> &result){
            if(root==NULL){
                return;
            }

            inorder(root->left,result);

            result.push_back(root->data);

            inorder(root->right,result);
        }

		vector<vector<int>> treeTraversal(TreeNode* root){
			//your code goes here
            vector<vector<int>> arr;

            vector<int> inorderResult;
            vector<int> preorderResult;
            vector<int> postorderResult;

            inorder(root,inorderResult);
            preorder(root,preorderResult);
            postorder(root,postorderResult);

            arr.push_back(inorderResult);
            arr.push_back(preorderResult);
            arr.push_back(postorderResult);

            return arr;
		}
};