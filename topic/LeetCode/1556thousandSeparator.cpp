/* 给你一个整数 n，请你每隔三位添加点（即 "." 符号）作为千位分隔符，并将结果以字符串格式返回。

 

示例 1：

输入：n = 987
输出："987"
示例 2：

输入：n = 1234
输出："1.234"
示例 3：

输入：n = 123456789
输出："123.456.789"
示例 4：

输入：n = 0
输出："0"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/thousand-separator
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    string thousandSeparator(int n) {
        string res="";
        string tempString=to_string(n);
        int count=0;

        for(int i=tempString.size()-1;i>=0;i--)
        {
            res=tempString[i]+res;
            ++count;

            if(count%3==0 && i!=0) 
            res="."+res;
        }
        return res;
    }
}; */

/* 数字转字符串，很舒服，有个问题就是不是i取余3为0，而是利用一个count进行一个计数 */