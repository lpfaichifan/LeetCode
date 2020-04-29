class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int res = INT_MAX;
        int left = 0;
        int sublength = 0;
        int sum = 0;
        for(int right = 0; right<nums.size(); right++)
        {
            sum+=nums[right];
            while(sum>=s)
            {
                sublength = right-left+1;
                res = res > sublength? sublength:res;
                sum-=nums[left];
                left++;
            }
        }
        return res == INT_MAX?0:res;
    }
};