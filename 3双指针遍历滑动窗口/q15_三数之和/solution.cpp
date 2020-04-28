class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        //vector<int> tmp;
        int nums_size = nums.size();
        if(nums_size<=2)
        {
            return ret;
        }
        int len_opt = nums_size-2;
        sort(nums.begin(), nums.end());
        for(int cur = 0;cur<len_opt;cur++)
        {
            if(nums[cur]>0)
            {
                break;
            }
            int positivenum = 0-nums[cur];
            int low = cur+1;
            int hight = nums_size-1;
            
            while(low<hight)
            {
                int low_val = nums[low];
                int hight_val = nums[hight];
                if(nums[low]+nums[hight] == positivenum)
                {
                    vector<int> tmp{nums[low], nums[hight], nums[cur]};
                    ret.push_back(tmp);
                    //去重
                    while(low<hight && nums[low] == low_val)
                    {
                        low++;
                    }
                    while(low<hight && nums[hight] == hight_val)
                    {
                        hight--;
                    }
                }
                else if(nums[low]+nums[hight] < positivenum)
                {
                    low++;
                }
                else if(nums[low]+nums[hight] > positivenum)
                {
                    hight--;
                }
            }
            while(cur+1<len_opt && nums[cur] == nums[cur+1])
            {
                cur++;
            }
        }
        return ret;
    }
};