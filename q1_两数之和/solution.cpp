class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target);
};

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
        vector<int> z_vet;
        bool z_b = false;
        for(int i = 0;i<nums.size();i++)
        {
            if(z_b)
            {
                break;
            }
            for(int j = 1;j<nums.size();j++)
            {
                if(i!=j)
                {
                    if(nums[i]+nums[j] == target)
                    {
                        z_vet.push_back(i);
                        z_vet.push_back(j);
                        z_b = true;
                        break;
                    }
                }
            }
        }
        return z_vet;
}