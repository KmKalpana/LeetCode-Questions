vector<int>v,v1;
for(int i=0; i<nums.size(); i++)
{
if(nums[i]%2==0)
{
v.push_back(nums[i]);
}
else
{
v1.push_back(nums[i]);
}
}
sort(v.begin(),v.end());
sort(v1.begin(),v1.end());
for(int i=0; i<v1.size(); i++)
{
v.push_back(v1[i]);
}
return v;