class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    bool isLeaf(Node* root){
        if(root->left == NULL && root->right == NULL)
        return true;
        
        return false;
    }
    int isSumProperty(Node *root)
    {
      if(!root)
      return 1;
      if(isLeaf(root))
      return 1;
      
      int left = isSumProperty(root->left);
      int right = isSumProperty(root->right);
      if(!left || !right)
      
      return 0;
      int sum = 0;
      if(root->left) 
      sum+=root->left->data;
      if(root->right)
      sum+=root->right->data;
      if(sum == root->data)
      return 1;
      
      return 0;
    }
};