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
        cout<<parent1<<" "<<parent2<<" "<<h1<<" "<<h2<<endl;
        if(parent1!=parent2 && h1==h2)
            return true;
        return false;
    }
};