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
    vector<int> topView(TreeNode *root){
        //your code goes here
        queue<pair<TreeNode*,int>> q;

        map<int,TreeNode*> mp;

        vector<int> result;

        if(root==NULL){
            return result;
        }

        q.push({root,0});

        while(!q.empty()){
            auto p = q.front();
            q.pop();

            int x=p.second;

            TreeNode* node=p.first;

            if(mp.find(x)==mp.end()){
                mp[x]=node;
            }

            if(node->left!=NULL){
                q.push({node->left,x-1});
            }

            if(node->right!=NULL){
                q.push({node->right,x+1});
            }
        } 

        for(auto &p : mp){
            result.push_back(p.second->data);
        }

        return result;
    }
};