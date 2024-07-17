class Solution {
public:
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> paths;
        vector<int> currentpath;
        if (root != nullptr) {
            RootToLeafPath(root, currentpath, paths);
        }
        return paths;
    }

private:
    void RootToLeafPath(Node* root, vector<int>& currentpath, vector<vector<int>>& paths) {
        if (root == nullptr) {
            return;
        }
          
        currentpath.push_back(root->data);
        if (root->left == nullptr && root->right == nullptr) {
            paths.push_back(currentpath);
        }
          
        RootToLeafPath(root->left, currentpath, paths);
        RootToLeafPath(root->right, currentpath, paths);
          
        currentpath.pop_back(); 
    }
};