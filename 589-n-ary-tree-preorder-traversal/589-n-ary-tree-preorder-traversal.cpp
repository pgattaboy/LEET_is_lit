/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void visitRoot(vector<int>& ans,Node* root){
        if(root==nullptr)
            return;
        ans.push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            visitRoot(ans,root->children[i]);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        visitRoot(ans,root);
        return ans;
    }
};