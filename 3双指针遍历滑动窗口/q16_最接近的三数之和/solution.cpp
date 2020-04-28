class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int nums_size = nums.size();
        if(nums_size<=2)
        {
            return -1;
        }
        int len_opt = nums_size-2;
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2], len = nums.size();
        if(target < nums[0] + nums[1] + nums[2]) return res;
        if(target > nums[nums.size()-1] + nums[nums.size()-2] + nums[nums.size()-3]){
            return nums[nums.size()-1] + nums[nums.size()-2] + nums[nums.size()-3];
        }
        for(int cur = 0;cur<len_opt;cur++)
        {
            int positivenum = target-nums[cur];
            int low = cur+1;
            int hight = nums_size-1;
            
            while(low<hight)
            {
                int low_val = nums[low];
                int hight_val = nums[hight];
                if(nums[low]+nums[hight] == positivenum)
                {
                    return target;
                }
                else if(nums[low]+nums[hight] < positivenum)
                {
                    if(abs(res - target) > abs(nums[low]+nums[hight]+nums[cur] - target))
                    {
                        res = nums[low]+nums[hight]+nums[cur];
                    }
                    low++;
                }
                else if(nums[low]+nums[hight] > positivenum)
                {
                    if(abs(res - target) > abs(nums[low]+nums[hight]+nums[cur] - target))
                    {
                        res = nums[low]+nums[hight]+nums[cur];
                    }
                    hight--;
                }
            }
        }
        return res;
    }
};