/* 给定一个整数，将其转化为7进制，并以字符串形式输出。

示例 1:

输入: 100
输出: "202"
示例 2:

输入: -7
输出: "-10"
注意: 输入范围是 [-1e7, 1e7] 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/base-7
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    string convertToBase7(int num) {
      string str="";
        int n=abs(num);
        if(n==0)
            str+="0";
        while(n!=0)
        {
            str+=to_string(n%7);
            n/=7;
        }
        if(num<0)
            str+="-";
        reverse(str.begin(),str.end());
        return str;
    }
}; */

/*进制的转换问题，但是为什么不能转换成无符号数的运算呢 */