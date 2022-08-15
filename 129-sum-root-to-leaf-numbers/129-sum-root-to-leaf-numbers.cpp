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
 /*   int sum=0,res=0;
    void add(TreeNode* root)
    {
      if(root==nullptr)  return;
        
        res=res*10+root->val;
        if(!root->left && !root->right)
        {
            sum+=res;
        }
        add(root->left);
        add(root->right);
        res=res/10;
        
    }
    */
     int sum(TreeNode* root,int num, int add)
 {
     if(root==NULL)
     return 0;
     num=num*10+root->val;
     if(root->left==NULL && root->right==NULL)
     {
         //add=num;
         //return add;
         return num;
     }
     return sum(root->left,num,add)+sum(root->right,num,add);
 }
    int sumNumbers(TreeNode* root) 
    {
         return sum(root,0,0);
        //return sum;
    }
};