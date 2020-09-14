/* 给定一个字符串，编写一个函数判定其是否为某个回文串的排列之一。

回文串是指正反两个方向都一样的单词或短语。排列是指字母的重新排列。

回文串不一定是字典当中的单词。

?

示例1：

输入："tactcoa"
输出：true（排列有"tacocat"、"atcocta"，等等）

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/palindrome-permutation-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/* class Solution {
public:
    bool canPermutePalindrome(string s) {
         map<char, int> m;

        for(int i = 0; i < s.size(); ++i)
        {
            ++m[s[i]];
        }

        int odd_count = 0;
        for(auto iter = m.begin(); iter != m.end(); ++iter)
        {
            if(iter->second % 2 != 0)
            {
                ++odd_count;
            }
        }

        if(s.size() % 2 == 0)
        {
            if(odd_count == 0) //字符次数全为偶数次
                return true;
        }
        else
        {
            if(odd_count == 1) //奇数次的字符仅有一个
                return true;
        }
        return false;
    }
}; */

/* 注意题目，不要想得太复杂 */