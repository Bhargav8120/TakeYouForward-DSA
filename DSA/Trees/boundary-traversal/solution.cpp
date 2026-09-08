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
        return !root->left && !root->right;
    }

    void leftBoundary(TreeNode* root,vector<int> &result){
        TreeNode* curr=root->left;

        while(curr){
            if(!isLeaf(curr)){
                result.push_back(curr->data);
            }
            if(curr->left){
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }
        }
    }

    void addLeaves(TreeNode* root,vector<int> &result){
        // TreeNode* curr=root;

        if(isLeaf(root)){
            result.push_back(root->data);
            return;
        }
        if(root->left){
            addLeaves(root->left,result);
        }
        if(root->right){
            addLeaves(root->right,result);
        }
    }

    void rightBoundary(TreeNode* root,vector<int> &result){
        TreeNode* curr=root->right;

        vector<int> temp;

        while(curr){
            if(!isLeaf(curr)){
                temp.push_back(curr->data);
            }
            if(curr->right){
                curr=curr->right;
            }
            else{
                curr=curr->left;
            }
        }

        for(int i=temp.size()-1;i>=0;--i){
            result.push_back(temp[i]);
        }
    }


    vector <int> boundary(TreeNode* root){
    	//your code goes here
        vector<int> result;

        if(!root){
            return result;
        }

        if(!isLeaf(root)){
            result.push_back(root->data);
        }

        leftBoundary(root,result);
        addLeaves(root,result);
        rightBoundary(root,result);

        return result;
    }
};