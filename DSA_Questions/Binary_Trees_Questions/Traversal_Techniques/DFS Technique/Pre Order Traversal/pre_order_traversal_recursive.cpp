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
void print(TreeNode* root, vector<int>&v){
            if(root == NULL)
            return;

            v.push_back(root->val);
            print(root->left,v);
            print(root->right,v);
        }
        vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        print(root,v);
        return v;
    }
    
};