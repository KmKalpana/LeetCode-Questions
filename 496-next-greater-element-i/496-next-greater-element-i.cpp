class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
     vector<int>res(nums2.size());
     stack<int>st;
    for(int i=nums2.size()-1; i>=0; i--)
    {
        int curr=nums2[i];
        while(!st.empty() && st.top()<=curr)
        {
            st.pop();
        }
        res[i]=st.empty()?-1:st.top();
        st.push(curr);
    }
        unordered_map<int,int>mp;
        vector<int>ans(nums1.size());
     for(int i=0; i<nums2.size(); i++)
     {
         mp[nums2[i]]=res[i];
     }
    for(int i=0; i<nums1.size(); i++)
    {
       ans[i]=mp[nums1[i]];
    }
        return ans;
    }
        
};