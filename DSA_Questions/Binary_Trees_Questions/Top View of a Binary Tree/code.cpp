class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root == NULL)
        return ans;
        
        map<int,int> mpp;
        queue<pair<Node*,int>> queue1;
        queue1.push({root,0});
        while(!queue1.empty()){
            auto p = queue1.front();
            queue1.pop();
            Node* temp = p.first;
            int line = p.second;
            if(mpp.find(line)==mpp.end()){
                mpp[line] = temp->data;
            }
            
            if(temp->left){
                queue1.push({temp->left,line-1});
            }
            if(temp->right){
                queue1.push({temp->right,line+1});
            }
        }
        
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        
        
        return ans;
        
        
    }

};
