class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> s1,s2;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(matrix[i][j] == 0)
                {
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        set<int>::iterator it;
        for(int i = 0;i<n;i++)
        {
            for(it = s1.begin();it!=s1.end();it++)
            {
                matrix[*it][i] = 0;
            }
        }
        for(int i = 0;i<m;i++)
        {
            for(it = s2.begin();it!=s2.end();it++)
            {
                matrix[i][*it] = 0;
            }
        }
    }
};