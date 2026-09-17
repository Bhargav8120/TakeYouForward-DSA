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
    bool isLeaf(TreeNode* root){
        return root && !root->left && !root->right;
    }

    void leftBoundary(TreeNode* root,vector<int> &result){

        if(root==NULL || isLeaf(root)){
            return;
        }

        result.push_back(root->data);
        
        if(root->left!=NULL){
            leftBoundary(root->left,result);
        }
        
        if(root->left==NULL){
            leftBoundary(root->right,result);
        }
    }

    void leaves(TreeNode* root,vector<int> &result){

        if(root==NULL){
            return;
        }

        if(isLeaf(root)){
            result.push_back(root->data);
            return;
        }

        leaves(root->left,result);

        leaves(root->right,result);

    }

    void rightBoundary(TreeNode* root,vector<int> &result,vector<int> &ans){
        // vector<int> ans;

        if(root==NULL || isLeaf(root)){
            return;
        }

        ans.push_back(root->data);

        if(root->right!=NULL){
            rightBoundary(root->right,result,ans);
        }
        if(root->right==NULL){
            rightBoundary(root->left,result,ans);
        }
    }

    vector <int> boundary(TreeNode* root){
    	//your code goes here
        vector<int> result;
        vector<int> ans;

        if(root==NULL){
            return result;
        }

        if(!isLeaf(root)){
            result.push_back(root->data);
        }

        leftBoundary(root->left,result);
        leaves(root,result);
        rightBoundary(root->right,result,ans);

        reverse(ans.begin(),ans.end());

        for(int i=0;i<ans.size();i++){
            result.push_back(ans[i]);
        }

        return result;
    }
};