class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
       //  Reverse Method.
        reverse(nums.begin(),nums.end());
        int l=k%n;
        reverse(nums.begin(),nums.begin()+l);
        reverse(nums.begin()+l,nums.end());
          /*   Brute Force method. 
           k=k%n;
            while(k>0)
            {
               int temp=nums[n-1]; 
              for(int i=n-1; i>0; i--)
              {
                   
                 nums[i]=nums[i-1]; 
              }
                nums[0]=temp;
                k--;
            }
        */
    }
};