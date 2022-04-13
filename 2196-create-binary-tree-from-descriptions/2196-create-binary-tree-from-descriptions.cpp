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
    TreeNode* createBinaryTree(vector<vector<int>>& d) 
    {
         int n=d.size();
        unordered_map<int, TreeNode*>mp;
         set<TreeNode*>c,p;
        for(int i=0; i<n; i++)
        {
            TreeNode* parent;
            if(mp.find(d[i][0])==mp.end())
            {
                parent=new TreeNode(d[i][0]);
            }
            else 
            {
                parent=mp[d[i][0]];
            }
            TreeNode* child;
            if(mp.find(d[i][1])==mp.end())
            {
                child=new TreeNode(d[i][1]);
            }
            else
            {
                child=mp[d[i][1]];
            }
            if(d[i][2]==1)
            {
                parent->left=child;
            }
            else
            {
                parent->right=child;
            }
            mp.insert({parent->val,parent});
            mp.insert({child->val,child});
            p.insert(parent);
            c.insert(child);
        }
     //   auto ans=NULL;
        for(auto x: p)
        {
            if(c.find(x)==c.end())
            {
                return x;
            }
        }
        return nullptr;
    }
};