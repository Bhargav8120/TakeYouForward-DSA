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
    vector<vector<int> > levelOrder(TreeNode* root) {
        //your code goes here
        queue<TreeNode*> q;

        vector<vector<int>> result;

        q.push(root);

        while(!q.empty()){
            int size=q.size();

            vector<int> level;

            if(root==NULL){
                return result;
            }

            TreeNode* node=root;

            for(int i=0;i<size;i++){

                node=q.front();
                q.pop();

                level.push_back(node->data);

                if(node->left!=NULL){
                    q.push(node->left);
                }

                if(node->right!=NULL){
                    q.push(node->right);
                }
            }
            result.push_back(level);
        }

        return result;
    }
};