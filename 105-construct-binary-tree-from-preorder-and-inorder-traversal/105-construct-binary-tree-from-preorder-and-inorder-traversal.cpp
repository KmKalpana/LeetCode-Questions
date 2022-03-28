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
    TreeNode* newnode(int data)
    {
        TreeNode* root=new TreeNode();
        root->val=data;
        root->left=NULL;
        root->right=NULL;
        return root;
    }
   TreeNode* construct(vector<int>& preorder,vector<int>& inorder,int istart,int iend,int &p)
    {
        if(istart>iend)
            return NULL;
       // static int pre=0;
        TreeNode* root=newnode(preorder[p]);
       p+=1;
        int i;
        if(istart==iend)
        {
            return root;
        }
        for(i=istart; i<=iend; i++)
        {
            if(inorder[i]==root->val)
                break;
        }
        root->left=construct(preorder,inorder,istart,i-1,p);
        root->right=construct(preorder,inorder,i+1,iend,p);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {
        int n=inorder.size()-1;
        int p=0;
     TreeNode* root=construct(preorder,inorder,0,n,p);   
        return root;
    }
};