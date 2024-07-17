class Solution {
public:
    vector<int> bottomView(Node* root) {
        vector<int> ans;
        if (root == nullptr)
            return ans;

        map<int, int> mpp; 
        queue<pair<Node*, int>> queue1; 
        queue1.push({root, 0}); 

        while (!queue1.empty()) {
            auto it = queue1.front();
            queue1.pop();
            Node* temp = it.first;
            int line = it.second;
            mpp[line] = temp->data; 

            
            if (temp->left) {
                queue1.push({temp->left, line - 1});
            }

            
            if (temp->right) {
                queue1.push({temp->right, line + 1});
            }
        }

        
        for (auto it : mpp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};