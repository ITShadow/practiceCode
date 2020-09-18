/* 给定一个只包括 '('，')'，'{'，'}'，'['，']'?的字符串，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。

示例 1:

输入: "()"
输出: true
示例?2:

输入: "()[]{}"
输出: true
示例?3:

输入: "(]"
输出: false
示例?4:

输入: "([)]"
输出: false
示例?5:

输入: "{[]}"
输出: true

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/* class Solution {
public:
   unordered_map<char, char> um = {
            {'{', '}'},
            {'(', ')'},
            {'[', ']'}
    };

    bool isValid(string s) {
        if (s.empty())
        {
            return true;
        } 
        else if (s.size() % 2) 
        {
            return false;
        } 
        else 
        {
            stack<char> ss;
            for (int i = 0; i < s.size(); i ++) 
            {
                if (ss.empty()) 
                {
                    ss.push(s[i]);
                } 
                else 
                {
                    if (s[i] == um[ss.top()]) 
                    {
                        ss.pop();
                    }
                     else 
                    {
                        ss.push(s[i]);
                    }
                }
            }
            return ss.empty();
        }        
    }
}; */

/* 使用哈希表操作，哈希表先保存所有的结果，使用栈来确定键值与示值的关系 */