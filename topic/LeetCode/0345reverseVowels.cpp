/* 编写一个函数，以字符串作为输入，反转该字符串中的元音字母。

示例 1:

输入: "hello"
输出: "holle"
示例 2:

输入: "leetcode"
输出: "leotcede"
说明:
元音字母不包含字母"y"。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-vowels-of-a-string
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/* class Solution {
public:
    string reverseVowels(string s) {
         if(s.empty()) return s;
        int l=0,r=s.size()-1;
        while(l<=r)
        {
            if(check(s[l])&&!check(s[r]))
            {
                r--;
            }
            else if(!check(s[l])&&check(s[r]))
            {
                l++;
            }
            else
            {
                if(check(s[l])&&check(s[r])) swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }

    bool check(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return true;
        else return false;
    }

}; */


/* 题目问的很麻烦，实际很简单 */