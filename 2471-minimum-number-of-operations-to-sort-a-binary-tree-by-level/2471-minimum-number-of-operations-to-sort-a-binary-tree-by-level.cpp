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
    int minSwaps(vector<int>&nums)
	{
	    int count=0;
	    vector<pair<int,int>>v(nums.size());
	    for(int i=0; i<nums.size(); i++)
	    {
	        v[i]={nums[i],i};
	    }
	    sort(v.begin(),v.end());
	    for(int i=0; i<nums.size(); i++)
	    {
	        if(i!=v[i].second)
	        {
	          count++;
	          swap(v[i],v[v[i].second]);
                i--;
	        }
	    }
	    return count;
	}
    int minimumOperations(TreeNode* root) 
    {
       int ans=0;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size())
        {
               int n=q.size();
              vector<int>v;
            for(int i=0; i<n; i++)
            {
                auto node=q.front();
                v.push_back(node->val);
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(v.size()>1)
            {
            ans+=minSwaps(v);
            }
        }
        return ans;
    }
};