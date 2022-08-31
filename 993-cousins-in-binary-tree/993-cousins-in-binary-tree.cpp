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
   /* //TC=0(N) SC=constant
    void helper(TreeNode* root, int x,int &h1,int h, int prev,int &parent)
    {
        if(root==nullptr)
            return ;
        if(root->val==x)
        {
            parent=prev;
            h1=h;
        }
        prev=root->val;
        helper(root->left,x,h1,h+1,prev,parent);
        helper(root->right,x,h1,h+1,prev,parent);
    }
    bool isCousins(TreeNode* root, int x, int y) 
    {
        int h1=0, h2=0;
        int parent1=-1, parent2=-1;
        helper(root,x,h1,0,0,parent1);
        helper(root,y,h2,0,0,parent2);
        if(parent1!=parent2 && h1==h2)
            return true;
        return false;
    }*/
    bool isCousins(TreeNode* root, int x, int y)
    {
        queue<TreeNode*>q;
        q.push(root);
        int h=0;
        TreeNode* prev=nullptr;
        while(!q.empty())
        {
            int n=q.size();
            bool isX=false, isY=false;
            for(int i=0; i<n; i++)
            {
              auto node=q.front();
                q.pop();
                if(node->val==x)
                    isX=true;
                if(node->val==y)
                    isY=true;
                if(node->left && node->right)
                {
                if(node->left->val==x && node->right->val==y)
                    return false;
                if(node->left->val==y && node->right->val==x)
                    return false;
                }
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }            
            if(isX && isY)
                return true;
        }
        return false;
    }
};