//运用 滑动窗口求解，在连续区间内寻找不同的字符，相同则移动窗口的上界，查找到字符串
//末尾则结束查找，返回区间的最大值
class Solution {
public:
    int getIndex(int left, int right, string& s, char target)
    {
        for(int i = left; i<right; i++)
        {
            if(s[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
    int lengthOfLongestSubstring(string s) {
        int i_left = 0;
        int i_right = 0;
        int max_ret = 0;

        while(i_right<s.length())
        {
            //"abcabcbb"
            int pos = getIndex(i_left, i_right, s, s[i_right]);
            if(pos == -1)
            {
                i_right++;
            }
            else
            {
                max_ret = max_ret > (i_right-i_left)?max_ret:(i_right-i_left);
                i_left = pos+1;
            }
        }
        max_ret = max_ret > (i_right-i_left)?max_ret:(i_right-i_left);
        return max_ret;
    }
};