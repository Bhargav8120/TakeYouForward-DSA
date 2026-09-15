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
		vector<int> postorder(TreeNode* root){
	        //your code goes here

            vector<int> result;

            stack<TreeNode*> st;

            TreeNode* node=root;

            while(true){
                if(node!=NULL){
                    st.push(node);
                    result.push_back(node->data);
                    node=node->right;
                }
                else{
                    if(st.empty()){
                        break;
                    }
                    else{
                        node=st.top();
                        st.pop();
                        node=node->left;
                    }
                }
            }
            reverse(result.begin(),result.end());

            return result;

		}
};