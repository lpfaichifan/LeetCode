//双指针法双向移动，最大面积计算，高度取区间两端最小值，宽度为元素下标之差
class Solution {
public:
    int calc_area(int left,int right,vector<int>& vec)
    {
        int max = 0;
        int wigth = 0;
        wigth = vec[left]>vec[right]?vec[right]:vec[left];
        max = max < wigth*(right-left)?wigth*(right-left):max;
        return max;  
    }
    int maxArea(vector<int>& height) {
        int res = 0;
        int res_max = 0;;
        int n_len = height.size()-1;
        int i_left = 0;
        while(i_left<n_len)
        {
            res = calc_area(i_left, n_len,height);
            res_max = res_max>res?res_max:res;
            if(height[i_left]<height[n_len])
            {
                i_left++;
            }
            else
            {
                n_len--;
            }
        }
        return res_max;
    }
};