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
    vector<int> largestValues(TreeNode* node) 
    {
      vector<int>v;
        if(node==nullptr)
            return v;
        queue<TreeNode*>q;
        q.push(node);
        while(!q.empty())
        {
            int count=q.size();
            int max=INT_MIN;
            for(int i=0; i<count; i++)
            {
                  TreeNode* root=q.front();
                q.pop();
                if(root->val>max)
                    max=root->val;
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
            v.push_back(max);
        }
        return v;
    }
};