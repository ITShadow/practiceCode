/* 给定一个非空的字符串，判断它是否可以由它的一个子串重复多次构成。给定的字符串只含有小写英文字母，并且长度不超过10000。

示例 1:

输入: "abab"

输出: True

解释: 可由子字符串 "ab" 重复两次构成。
示例 2:

输入: "aba"

输出: False
示例 3:

输入: "abcabcabcabc"

输出: True

解释: 可由子字符串 "abc" 重复四次构成。 (或者子字符串 "abcabc" 重复两次构成。)

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/repeated-substring-pattern
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/* class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        return (s+s).find(s,1)!=s.size();
    }
}; */

/* 这道题很绕。举个例子：现在有一个由一个子串重复多次构成的字符串s1="AbcAbc"和一个不是由一个子串重复多次构成的字符串s2="Abcdef"，分别用他们重复构成字符串S1="AbcAbcAbcAbc"和S2="AbcdefAbcdef"。现在我们要分别从下标1开始在S1和S2里找s1和s2的子串下边，我们会发现s1返回下标为3，而s2返回下标为6恰好为s2的字符数。再举其他例子验证一下，发现如果一个小字符串s不是由一个子串重复多次构成的话，在用s重复一次构成的大字符串S中查找s所返回的下标必然为s的字符数。
所以这题只需要用题目给出的小字符串s重复一次构成的大字符串S并查找s，再将返回的小标与s的字符数进行对比，如果相等则可以判断s
不可以由它的一个子串重复多次构成，反之则反。
 */