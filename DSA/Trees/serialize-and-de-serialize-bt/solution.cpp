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

        if(root==NULL){
            return "";
        }

       stringstream ss;

       queue<TreeNode*> q;

       q.push(root);

       while(!q.empty()){

            TreeNode* currNode=q.front();
            q.pop();

            if(currNode==NULL){
                ss<<"#,";
            }
            else{
                ss<<currNode->data<<",";

                q.push(currNode->left);
                q.push(currNode->right);
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
                TreeNode* leftNode = new TreeNode(stoi(str));
                node->left = leftNode;
                q.push(leftNode);
            }

            getline(s,str,',');

            if(str!="#"){
                TreeNode* rightNode = new TreeNode(stoi(str));
                node->right = rightNode;
                q.push(rightNode);
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