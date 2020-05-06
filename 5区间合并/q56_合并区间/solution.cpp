class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() == 0) {
            return {};
        }
        vector<vector<int>> ret;
        sort(intervals.begin(), intervals.end());
        for(int i = 0;i<intervals.size();i++)
        {
            int left = intervals[i][0];
            int right = intervals[i][1];
            if(!ret.size() || ret.back()[1]<left)
            {
                ret.push_back({left,right});
            }
            else
            {
                ret.back()[1] = max(ret.back()[1], right);
            }
        }
        return ret;
    }
};