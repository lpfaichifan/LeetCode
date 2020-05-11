
// 给定一个整数 n，返回 n! 结果尾数中零的数量。

// 示例 1:

// 输入: 3
// 输出: 0
// 解释: 3! = 6, 尾数中没有零。
// 示例 2:

// 输入: 5
// 输出: 1
// 解释: 5! = 120, 尾数中有 1 个零.
// 说明: 你算法的时间复杂度应为 O(log n) 。
class Solution {
public:
    long long retjc(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        return n*retjc(n - 1);
    }
int trailingZeroes(int n) {
	long long nubcalc = retjc(n);
	int ret = 0;
	while (nubcalc)
	{
		int yushu = nubcalc % 10;
		nubcalc = nubcalc / 10;
		if (yushu == 0)
		{
			ret += 1;
		}
		else
		{
			break;
		}
	}
	return ret;
}
};
//////////////////////////////////////////////////////////////////////
//上面的方法会溢出，下面的方法不会，原理为产生0必然会出现2和5乘积的结果，2必然出现，统计5出现的次数即可
//////////////////////////////////////////////////////////////////////
class Solution {
public:
    int trailingZeroes(int n) {
        int res = 0;
        while(n >= 5)
        {
            res += n/5;
            n = n/5;
        }
        return res;
    }
};