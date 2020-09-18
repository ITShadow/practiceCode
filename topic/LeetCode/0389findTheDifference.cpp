/* 给定两个字符串 s 和 t，它们只包含小写字母。

字符串 t 由字符串 s 随机重排，然后在随机位置添加一个字母。

请找出在 t 中被添加的字母。

 

示例:

输入：
s = "abcd"
t = "abcde"

输出：
e

解释：
'e' 是那个被添加的字母。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-the-difference
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
lass Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;

        for(auto c:t) mp[c]++;

        for(auto c:s) mp[c]--;

        for(auto iter=mp.begin();iter!=mp.end();iter++)
        {
            if(iter->second!=0) return iter->first;
        }
        return ' ';
    }
};
 */