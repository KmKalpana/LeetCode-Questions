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
/*  BFS traversal
int sum=0;
     queue<TreeNode*>q;
        q.push(node);
        while(!q.empty())
        {
            int count=q.size();
            sum=0;
            for(int i=0; i<count; i++)
            {
                TreeNode* root=q.front();
                q.pop();
                sum+=root->val;
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
        }
        return sum ;
*/
class Solution {
public:
    int sum=0;
     void leavesum(TreeNode* root, int count,int init)
     {
        if(root==nullptr)
            return ;
         leavesum(root->left,count,init+1);
         if(count==init)
         {
             sum+=root->val;
         }
         leavesum(root->right,count,init+1);
     }
    int height(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }
    int deepestLeavesSum(TreeNode* node) 
    {
       int count=height(node);
         leavesum(node,count,1);
        return sum;
    }
};