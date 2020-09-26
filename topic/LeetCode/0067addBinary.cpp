/* 给你两个二进制字符串，返回它们的和（用二进制表示）。

输入为 非空 字符串且只包含数字 1 和 0。

 

示例 1:

输入: a = "11", b = "1"
输出: "100"
示例 2:

输入: a = "1010", b = "1011"
输出: "10101"
 

提示：

每个字符串仅由字符 '0' 或 '1' 组成。
1 <= a.length, b.length <= 10^4
字符串如果不是 "0" ，就都不含前导零。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-binary
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    string addBinary(string a, string b) {
        int a1=a.size(),b1=b.size();

        while(a1<b1)
        {
            a='0'+a;
            a1++;
        }

        while(b1<a1)
        {
            b='0'+b;
            b1++;
        }

        for(int i=a1-1;i>0;i--)
        {
            a[i]=a[i]-'0'+b[i];
            if(a[i]>='2') 
            {
                a[i]=(a[i]-'0')%2+'0';
                a[i-1]=a[i-1]+1;
            }
        }
        a[0]=a[0]-'0'+b[0];
        if(a[0]>='2')
        {
            a[0]=(a[0]-'0')%2+'0';
            a='1'+a;
        }
        return a;
    }
}; */

/* 也就是模拟二进制得加法 */