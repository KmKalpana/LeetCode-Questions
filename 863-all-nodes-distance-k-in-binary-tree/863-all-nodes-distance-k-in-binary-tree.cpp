/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <bits/stdc++.h>
class Solution {
public:
    void getAdjacents(TreeNode* root, TreeNode* parent,unordered_map<int,vector<int>>&mp)
{
    if(!root)
    return;
    vector<int>temp;
    if(parent!=NULL)
    {
        temp.push_back(parent->val);
    }
    if(root->left)
      temp.push_back(root->left->val);
      if(root->right)
      temp.push_back(root->right->val);
    
    mp[root->val]=temp;
    getAdjacents(root->left,root,mp);
    getAdjacents(root->right,root,mp);
}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        if(k==0)
            return {target->val};
        vector<int>ans;
         unordered_map<int,vector<int>>mp;
           getAdjacents(root,NULL,mp);
        unordered_map<int,bool>vis;
       queue<int>q;    
        q.push(target->val);
        while(!q.empty())
        {
          int size=q.size();
           for(int i=0; i<size; i++)
           {
               auto node=q.front();
               q.pop();
               vis[node]=true;
               for(auto it: mp[node])
               {
                   if(!vis[it])
                       q.push(it);
                   if(k==1 && !vis[it])
                   {
                       ans.push_back(it);
                   }
               }
           }
            k--;
        }
        return ans;
    }
};