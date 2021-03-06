/* 在字符串 s 中找出第一个只出现一次的字符。如果没有，返回一个单空格。 s 只包含小写字母。

示例:

s = "abaccdeff"
返回 "b"

s = "" 
返回 " "

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/* class Solution {
public:
    char firstUniqChar(string s) {
        if(s=="") return ' ';
        unordered_map<char,int> mp;

        for(auto c:s) mp[c]++;

        
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==1) return s[i];
            
        }
        return ' ';
    }
}; */

/* 哈希表计数，返回次数为一的值 */