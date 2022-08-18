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
    vector<int> rightSideView(TreeNode* root) 
    {
        if(!root)
            return {};
       queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty())
        {
           int size=q.size();
            bool seen=false;
            while(size--)
            {
                TreeNode* temp=q.front();
                 q.pop();
                if(!seen)
                    ans.push_back(temp->val);
                seen=true;
                if(temp->right) 
                    q.push(temp->right);
                if(temp->left)
                    q.push(temp->left);
            }
        }
        return ans;
    }
};