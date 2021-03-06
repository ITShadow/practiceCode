/* 给定一个正整数 n，将其拆分为至少两个正整数的和，并使这些整数的乘积最大化。 返回你可以获得的最大乘积。

示例 1:

输入: 2
输出: 1
解释: 2 = 1 + 1, 1 × 1 = 1。
示例 2:

输入: 10
输出: 36
解释: 10 = 3 + 3 + 4, 3 × 3 × 4 = 36。
说明: 你可以假设 n 不小于 2 且不大于 58。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/integer-break
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    int integerBreak(int n) {
        if(n <= 3)  return n-1;     //如果n<=3,数字要求至少分为两部分，实际结果的最大值为n-1
        vector<int> dp(n+2);
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;                  //当n大于3时,<=3的部分可以不继续拆分，它本身的长度作为dp值
        for(int i = 4; i <= n; ++i)
            for(int j = 0; j <= i/2; ++j)
                dp[i] = max(dp[i], dp[j] * dp[i-j]);
        return dp[n];
    }
}; */