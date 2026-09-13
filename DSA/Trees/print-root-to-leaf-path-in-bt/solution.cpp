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
    void dfs(TreeNode* root,vector<vector<int>> &allPaths,vector<int> &paths){
            if(root==NULL){
                return;
            }

            paths.push_back(root->data);

            if(root->left==NULL && root->right==NULL){
                allPaths.push_back(paths);
            }
            
            else{

                dfs(root->left,allPaths,paths);

                dfs(root->right,allPaths,paths);
            }

            paths.pop_back();
        }

	public:
    	vector<vector<int>> allRootToLeaf(TreeNode* root) {
            //your code goes here
            vector<vector<int>> allPaths;

            vector<int> paths;

            dfs(root,allPaths,paths);

            return allPaths;
		}
};