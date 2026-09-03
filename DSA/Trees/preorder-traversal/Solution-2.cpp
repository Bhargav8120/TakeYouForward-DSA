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
		vector<int> preorder(TreeNode* root){
	       //your code goes here
           stack<TreeNode*> st;

           vector<int> result;

           TreeNode* Node=root;

           while(true){
            if(Node!=NULL){
                st.push(Node);

                result.push_back(Node->data);

                Node=Node->left;
            }
            else{
                if(st.empty()){
                    break;
                }
                Node=st.top();

                st.pop();

                Node=Node->right;
            }
           }
           return result;
		}
};