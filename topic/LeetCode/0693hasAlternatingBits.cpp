/* 给定一个正整数，检查它的二进制表示是否总是 0、1 交替出现：换句话说，就是二进制表示中相邻两位的数字永不相同。

 

示例 1：

输入：n = 5
输出：true
解释：5 的二进制表示是：101
示例 2：

输入：n = 7
输出：false
解释：7 的二进制表示是：111.
示例 3：

输入：n = 11
输出：false
解释：11 的二进制表示是：1011.
示例 4：

输入：n = 10
输出：true
解释：10 的二进制表示是：1010.
示例 5：

输入：n = 3
输出：false
 

提示：

1 <= n <= 231 - 1

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/binary-number-with-alternating-bits
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        string str="";
        
        while(n>0)
        {
            int temp=n%2;
            str+=to_string(temp);
            n/=2;
        }
        
        for(int i=0;i<str.size()-1;i++)
        {
            if(str[i]==str[i+1])
            {
                return false;
            }
        }
        return true;

    }
};
 */