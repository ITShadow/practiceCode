/* 在无限的整数序列 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ...中找到第 n 位数字。

 

注意：n 是正数且在 32 位整数范围内（n < 231）。

 

示例 1：

输入：3
输出：3
示例 2：

输入：11
输出：0
解释：第 11 位数字在序列 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... 里是 0 ，它是 10 的一部分。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/nth-digit
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    int findNthDigit(int n) {
        int i=1;
        while(n>0.9*pow(10,i)*i) n-=0.9*pow(10,i)*i,i++;

        string res=to_string(pow(10,i-1)+(n-1)/i);
        return res[(n-1)%i]-'0';
    }
}; */