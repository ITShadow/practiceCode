/* 给定一种规律 pattern 和一个字符串 str ，判断 str 是否遵循相同的规律。

这里的 遵循 指完全匹配，例如， pattern 里的每个字母和字符串 str 中的每个非空单词之间存在着双向连接的对应规律。

示例1:

输入: pattern = "abba", str = "dog cat cat dog"
输出: true
示例 2:

输入:pattern = "abba", str = "dog cat cat fish"
输出: false
示例 3:

输入: pattern = "aaaa", str = "dog cat cat dog"
输出: false
示例 4:

输入: pattern = "abba", str = "dog dog dog dog"
输出: false
说明:
你可以假设 pattern 只包含小写字母， str 包含了由单个空格分隔的小写字母。    

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/word-pattern
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    void split(string s,vector<string>&vec)
    {
        stringstream ss(s);
        string temp;
        while(ss>>temp)
        {
            vec.push_back(temp);
        }
    }
    bool wordPattern(string pattern, string s) {
        vector<string>vec;
        split(s,vec);
        if(vec.size()!=pattern.size()) return false;
        unordered_map<char, string> map;
        unordered_map<string, char> rmap;

        for(int i=0;i<pattern.size();++i)
        {
            if((map.count(pattern[i])==1&&map[pattern[i]]!=vec[i])||(rmap.count(vec[i])&&rmap[vec[i]]!=pattern[i]))
            {
                return false;
            }
            map[pattern[i]]=vec[i];
            rmap[vec[i]]=pattern[i];
        }
     
        return true;
    }
}; */

/* 还是有漏了的地方，忘记了反过来也有可能错误,思路是正确的，但是代码能力和逻辑能力还是需要继续加强 */