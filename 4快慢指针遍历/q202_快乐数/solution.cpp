class Solution {
public:
    int calcnum(int n)
    {
        int sum = 0;
        while(n)
        {
            sum+=(n%10)*(n%10);
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        do{
            slow = calcnum(slow);
            fast = calcnum(fast);
            fast = calcnum(fast);
        }while(slow!=fast);
        return slow == 1;
    }
};