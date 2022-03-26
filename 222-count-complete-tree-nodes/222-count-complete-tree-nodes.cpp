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
class Solution
{
public: 
    
    int countNodes(TreeNode* root)
    {
        int count=0;
        if(root==NULL)
        {
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* current=q.front();
            count+=1;
            if(current->left!=NULL)
            {
                q.push(current->left);
            }
            if(current->right!=NULL)
            {
                q.push(current->right);
            }    
            q.pop();
            }
        return count;
    }
      /*static int count=0;
        if(root==NULL)
        {
            return 0;
        }
          count++;
        countNodes(root->left);
       countNodes(root->right);
        return count;
    }*/
};