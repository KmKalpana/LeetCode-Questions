class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
      unordered_map<int,int>mp;
        stack<int>st;
        for(auto it: nums2)
        {
            while(!st.empty() && st.top()<it)
            {
                mp[st.top()]=it;
                st.pop();
            }
            st.push(it);
        }
        vector<int>ans;
    for(int i=0; i<nums1.size(); i++)
    {
       int num=mp.count(nums1[i])?mp[nums1[i]]:-1;
        ans.push_back(num);
    }
        return ans;
    }
        
};