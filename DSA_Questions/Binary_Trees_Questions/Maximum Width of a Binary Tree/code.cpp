class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        long long int ans = 0;
        queue<pair<TreeNode*, long long int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            long long int size = q.size();
            long long int first, last;
            long long int min = q.front().second; 
            for (long long int i = 0; i < size; i++) {
                TreeNode* node = q.front().first;
                long long int curr_id = q.front().second - min; 
                q.pop();

                if (i == 0) first = curr_id;
                if (i == size - 1) last = curr_id;

                if (node->left)
                    q.push({node->left, curr_id * 2 + 1});
                if (node->right)
                    q.push({node->right, curr_id * 2 + 2});
            }

            ans = max(ans, last - first + 1);
        }

        return static_cast<int>(ans);
    }
};