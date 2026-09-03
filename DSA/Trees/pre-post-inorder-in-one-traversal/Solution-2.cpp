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
		vector<vector<int>> treeTraversal(TreeNode* root){
			//your code goes here
            vector<int> pre , in ,post;

            stack<pair<TreeNode*,int>> st;

            if(root==NULL) return {pre,in,post};

            st.push({root,1});

            while(!st.empty()){
                auto [node,state] = st.top();

                st.pop();

                if(state==1){
                    pre.push_back(node->data);

                    st.push({node,2});

                    if(node->left!=NULL){
                        st.push({node->left,1});
                    }
                }
                else if(state==2){
                    in.push_back(node->data);

                    st.push({node,3});

                    if(node->right != NULL){
                        st.push({node->right,1});
                    }
                }
                else{
                    post.push_back(node->data);
                }
            }

            return {in,pre,post};
		}
};