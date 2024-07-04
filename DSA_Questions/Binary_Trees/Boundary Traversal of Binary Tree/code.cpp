

class Solution {
public:
    // Helper function to check if a node is a leaf
    bool isLeaf(Node* node) {
        return !node->left && !node->right;
    }

    // Function to add the left boundary nodes (excluding leaves)
    void addLeftBoundary(Node* root, vector<int>& res) {
        Node* cur = root->left;
        while (cur) {
            if (!isLeaf(cur))
                res.push_back(cur->data);
            if (cur->left)
                cur = cur->left;
            else
                cur = cur->right;
        }
    }

    // Function to add the right boundary nodes (excluding leaves)
    void addRightBoundary(Node* root, vector<int>& res) {
        Node* cur = root->right;
        vector<int> temp;
        while (cur) {
            if (!isLeaf(cur))
                temp.push_back(cur->data);
            if (cur->right)
                cur = cur->right;
            else
                cur = cur->left;
        }
        for (int i = temp.size() - 1; i >= 0; i--) {
            res.push_back(temp[i]);
        }
    }

    // Function to add all leaf nodes
    void addLeaves(Node* root, vector<int>& res) {
        if (isLeaf(root)) {
            res.push_back(root->data);
            return;
        }
        if (root->left)
            addLeaves(root->left, res);
        if (root->right)
            addLeaves(root->right, res);
    }

    // Main function to get the boundary traversal
    vector<int> boundary(Node* root) {
        vector<int> res;
        if (!root)
            return res;
        if (!isLeaf(root))
            res.push_back(root->data);
        addLeftBoundary(root, res);
        addLeaves(root, res);
        addRightBoundary(root, res);
        return res;
    }
};



