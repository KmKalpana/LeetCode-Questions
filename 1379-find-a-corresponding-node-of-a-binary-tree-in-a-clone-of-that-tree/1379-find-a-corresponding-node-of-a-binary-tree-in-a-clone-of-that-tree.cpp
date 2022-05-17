class Solution {
public:
  TreeNode* helper(TreeNode* cloned, TreeNode* target)
    {
         if(cloned==NULL)
             return NULL;
       
        if(cloned->val==target->val)
        {
            return cloned;
        }
        TreeNode* left=  helper(cloned->left,target);
         TreeNode* right= helper(cloned->right,target);
        
       if(left!=nullptr)
           return left;
       else if(right!=nullptr) return right;
       
       
       return nullptr;
    
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        if(target==NULL)
        {
            return NULL;
        }
         TreeNode* ans=helper(cloned,target);
        return ans;
    }
    
};