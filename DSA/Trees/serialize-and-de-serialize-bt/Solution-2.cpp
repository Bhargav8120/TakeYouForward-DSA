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

    string serialize(TreeNode* root) {

        stringstream ss;

        if(root==NULL){
            return "";
        }

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            if(node==NULL){
                ss<<"#,";
            }
            else{
                ss<<node->data<<",";

                q.push(node->left);
                q.push(node->right);
            }
        }
         return ss.str();
        
    }

    TreeNode* deserialize(string data) {

        if(data.empty()){
            return NULL;
        }
        
        stringstream s(data);
        string str;

        getline(s,str,',');

        TreeNode* root = new TreeNode(stoi(str));

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            getline(s,str,',');
            if(str!="#"){
                TreeNode* leftSide = new TreeNode(stoi(str));
                node->left=leftSide;
                q.push(leftSide);
            }

            getline(s,str,',');
            if(str!="#"){
                TreeNode* rightSide = new TreeNode(stoi(str));
                node->right = rightSide;
                q.push(rightSide);
            }
        }
        return root;
    }
};


/*
* Your Codec object will be instantiated and called as such:
* Codec* ser = new Codec();
* Codec* deser = new Codec();
* string tree = ser->serialize(root);
* TreeNode* ans = deser->deserialize(tree);
* return ans;
*/