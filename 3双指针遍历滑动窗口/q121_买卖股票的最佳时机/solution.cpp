class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int numsize = prices.size();
        vector<int> z_tmp;
        int inmy = 0;
        int outmy = 0;
        for (int i = 0; i < numsize; i++)
        {
            for (int j = i; j < numsize; j++)
            {
                if (prices[i]<prices[j])
                {
                    inmy = prices[i];
                    outmy = prices[j];
                    z_tmp.push_back(outmy-inmy);
                }
            }
        }
        if (z_tmp.size()>0)
        {
            int max = 0;
            for(int k = 0; k<z_tmp.size();k++)
            {
                if(max<z_tmp[k])
                {
                    max = z_tmp[k];
                }
            }
            return max;
        }
        return 0;
    }
};