class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty())
        {
            return res;
        }
        int m = matrix.size(); //行的总长
        int n = matrix[0].size(); //列宽
        int row = 0; //行
        int col = 0; //列
        while(m>0 && n>0)
        {
            //只有一行的矩阵
            if(m == 1)
            {
                for(int i = 0; i < n; i++)
                {
                    res.push_back(matrix[row][col++]);
                }
                break;
            }
            if(n == 1)
            {
                //只有一列的矩阵
                for(int i = 0; i < m; i++)
                {
                    res.push_back(matrix[row++][col]);
                }
                break;
            }
            //向右遍历
            for(int i = 0; i < n-1; i++)
            {
                res.push_back(matrix[row][col++]);
            }
            //向下遍历
            for(int i = 0; i < m-1; i++)
            {
                res.push_back(matrix[row++][col]);
            }
            //向左遍历
            for(int i = 0; i < n-1; i++)
            {
                res.push_back(matrix[row][col--]);
            }
            //向上遍历
            for(int i = 0; i < m-1; i++)
            {
                res.push_back(matrix[row--][col]);
            }
            m -= 2;
            n -= 2;
            row++;
            col++;
        }
        return res;
    }
};