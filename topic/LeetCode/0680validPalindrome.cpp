/* 给定一个非空字符串 s，最多删除一个字符。判断是否能成为回文字符串。

示例 1:

输入: "aba"
输出: True
示例 2:

输入: "abca"
输出: True
解释: 你可以删除c字符。
注意:

字符串只包含从 a-z 的小写字母。字符串的最大长度是50000。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-palindrome-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    bool validPalindrome(string s) {
        // 双指针遍历
        for(int i = 0, j = s.length() - 1; i < j; i ++, j --) {
            // 遇到要删除的情况，分成两部分进行判断
            if(s[i] != s[j]) {
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }
        }
        return true;
    }
    // 判断子字符串是否是回文串
    bool isPalindrome(string s, int i, int j) {
        while(i < j) {
            if(s[i ++] != s[j --]) {
                return false;
            }
        }
        return true;
    }
};


 */