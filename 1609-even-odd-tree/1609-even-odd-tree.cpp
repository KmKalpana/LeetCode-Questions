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
    bool isEvenOddTree(TreeNode* root) 
    {
         queue<TreeNode*>q;
        q.push(root);
        int count=-1;
        while(!q.empty())
        {
            int size=q.size();
            int prev_odd=0;
            int prev_even=INT_MAX;
                count++;
            for(int i=0; i<size; i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(count%2==0)
                {
                    if(node->val%2!=0)
                    {
                        if(prev_odd>=node->val)
                            return false;
                        else
                            prev_odd=node->val;
                    }
                    else
                        return false;
                }
                else if(count%2!=0)
                {
                    if(node->val%2==0)
                    {
                            if(prev_even<=node->val)
                                return false;
                            else
                                prev_even=node->val;
                        
                    }
                    else
                        return false;
                }
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        
        }
        return true;
    }
};