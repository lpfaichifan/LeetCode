class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 0)
        {
            return "";
        }
        else if(n == 1)
        {
            return strs[0];
        }
        else
        {
        }
        
        for(int i = 0; i<strs[0].size(); i++)
        {
            for(int j = 1; j<strs.size(); j++)
            {
                if(strs[j][i] != strs[0][i])
                {
                    return strs[0].substr(0, i);
                }
            }
        }
        
        return strs[0];
    }
};