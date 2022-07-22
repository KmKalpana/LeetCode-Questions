class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
    if(nums.size()==1 && k==1)
    return {nums[0]};
    vector<int>ans;
     deque<int>dq;
   int i=0;
        int n=nums.size();
        while(i<n)
        {
           if(!dq.empty() && dq.front()==i-k)
               dq.pop_front();
            while(!dq.empty() && nums[dq.back()]<nums[i])
                dq.pop_back();
            dq.push_back(i);
            if(i>=k-1)
                ans.push_back(nums[dq.front()]);
            i++;
        }
    return ans;    
    }
};