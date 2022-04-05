class Solution {
public:
    int maxArea(vector<int>& height) 
    {
    int max_area=0;
        int i=0;
        int j=height.size()-1;
        while(i<height.size() && j>=0)
        {
           int diff=j-i;
            int area= min(height[i],height[j])*diff;
            if(max_area<area)
                max_area=area;
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return max_area;
    }
};