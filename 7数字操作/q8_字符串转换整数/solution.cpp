class Solution {
public:
    int myAtoi(string str) {
        int elemax = INT_MAX;
        int elemin = INT_MIN;
        bool issignal = false;
        bool isin = false;
        int res = 0;
        for(int i = 0; i<str.size(); i++)
        {
            if(str[i] == ' ')
            {
                continue;
            }
            else
            {
                if((str[i] < '0' || str[i] > '9') && (str[i] != '-' && str[i] != '+'))
                {
                    return res;
                }
            }
            if((str[i] == '-' || str[i] == '+') && (isin == false)) 
            {
                isin = true;
                if(str[i] == '-')
                {
                    issignal = true;
                }
                continue;
            }
            else if(str[i] >= '0' && str[i] <= '9')
            {
                if (res < elemin / 10 || res  >= elemax / 10 || (res==INT_MAX/10&&str[i]>'7'))
                {
                    return issignal ? elemin : elemax;
                }
                else
                {
                    isin = true;
                    res = res * 10+str[i]-'0';
                }
            }
            else
            {
                break;
            }
        }
        res = res*(issignal?-1:1);
        if(res > elemax)
        {
            return INT_MAX;
        }
        else if (res < elemin)
        {
            return INT_MIN;
        }
        return res;
    }
};