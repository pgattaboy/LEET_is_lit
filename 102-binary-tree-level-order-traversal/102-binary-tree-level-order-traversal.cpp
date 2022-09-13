/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode* > q;
        if(root!=nullptr){
            q.push(root);
            TreeNode* cur;
            while(!q.empty()){
                vector<int>temp;
                int n=q.size();
                for(int i=0;i<n;i++){
                     cur=q.front();
                     q.pop();
                    if(cur->left!=nullptr)
                        q.push(cur->left);
                    if(cur->right !=nullptr)
                        q.push(cur->right);
                    temp.push_back(cur->val);
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};