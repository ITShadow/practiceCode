/* 给定两个字符串s1, s2，找到使两个字符串相等所需删除字符的ASCII值的最小和。

示例 1:

输入: s1 = "sea", s2 = "eat"
输出: 231
解释: 在 "sea" 中删除 "s" 并将 "s" 的值(115)加入总和。
在 "eat" 中删除 "t" 并将 116 加入总和。
结束时，两个字符串相等，115 + 116 = 231 就是符合条件的最小和。
示例 2:

输入: s1 = "delete", s2 = "leet"
输出: 403
解释: 在 "delete" 中删除 "dee" 字符串变成 "let"，
将 100[d]+101[e]+101[e] 加入总和。在 "leet" 中删除 "e" 将 101[e] 加入总和。
结束时，两个字符串都等于 "let"，结果即为 100+101+101+101 = 403 。
如果改为将两个字符串转换为 "lee" 或 "eet"，我们会得到 433 或 417 的结果，比答案更大。
注意:

0 < s1.length, s2.length <= 1000。
所有字符串中的字符ASCII值在[97, 122]之间。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-ascii-delete-sum-for-two-strings
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
   int minimumDeleteSum(string s1, string s2)
    {
    int len1 = s1.length();
    int len2 = s2.length();

    int dp[len1 + 1][len2 + 1];
    memset(dp,0, sizeof(dp));

    for (int i = 1; i <= len1; ++i)
        for (int j = 1; j <= len2; ++j)
        {
            if(s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + s1[i - 1];
            else
                dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
        }

    int sum = 0;
    for (int i = 0; i < len1; ++i)
        sum += s1[i];
    for (int i = 0; i < len2; ++i)
        sum += s2[i];
    return sum - 2 * dp[len1][len2];
    }

}; */