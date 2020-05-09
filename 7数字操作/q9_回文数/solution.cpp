class Solution {
public:
    bool isPalindrome(int x) {
        string strInt = std::to_string(x);
        string reversestrint = "";
        if(x<0)
        {
            return false;
        }

        do
        {
            int n = x%10;
            x/=10;
            reversestrint.append(std::to_string(n));
        } while (x!=0);
        return strInt == reversestrint;
    }
};