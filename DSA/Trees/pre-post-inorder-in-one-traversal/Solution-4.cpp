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
            stack<pair<TreeNode*,int>> st;

            vector<vector<int>> result;

            vector<int> pre,in,post;

            if(root==NULL){
                return {in,pre,post};
            }

            st.push({root,1});

            while(!st.empty()){
                auto p = st.top();
                st.pop();

                if(p.second==1){
                    pre.push_back(p.first->data);
                    st.push({p.first,2});

                    if(p.first->left!=NULL){
                        st.push({p.first->left,1});
                    }
                }
                else if(p.second==2){
                    in.push_back(p.first->data);
                    st.push({p.first,3});

                    if(p.first->right!=NULL){
                        st.push({p.first->right,1});
                    }
                }
                else{
                    post.push_back(p.first->data);
                }
            }

            return {in,pre,post};
		}
};