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
     TreeNode* build(vector<int>&inorder,vector<int>&postorder,int start,int end, int *in)
     {
      if(start>end)
      {
          return NULL;
      }
         TreeNode* node = new TreeNode(postorder[*in]);
         (*in)--;
         if(start==end)
         {
             return node;
         }
          int i; 
         for(i=start; i<end; i++)
         {
             if(inorder[i]==node->val)
                 break;
         }
          node->right=build(inorder,postorder,i+1,end,in);
          node->left=build(inorder,postorder,start,i-1,in);
         return node;
     }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
    {
         if(inorder.size()==1 && postorder.size()==1 && inorder[0]==postorder[0])
         {
             return (new TreeNode(inorder[0]));
         }
        int start=0; 
        int end=inorder.size()-1;
        int in=end;
        TreeNode* root=build(inorder,postorder,start,end,&in);
        return root;
    }
};