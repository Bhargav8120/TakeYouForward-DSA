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
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        //your code goes here
        int count=0;

        queue<TreeNode*> q;

        TreeNode* node=root;

        q.push(root);

        vector<vector<int>> res;

        while(!q.empty()){
            count++;

            vector<int> level;

            int size=q.size();

            for(int i=0;i<size;i++){
                node=q.front();

                q.pop();

                level.push_back(node->data);

                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right != NULL){
                    q.push(node->right);
                }

            }

            if(count%2){
                res.push_back(level);
            }
            else{
                reverse(level.begin(),level.end());
                res.push_back(level);
            }

        }

        return res;
    }
};