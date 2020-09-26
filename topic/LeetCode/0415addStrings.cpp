/* 给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和。

 

提示：

num1 和num2 的长度都小于 5100
num1 和num2 都只包含数字 0-9
num1 和num2 都不包含任何前导零
你不能使用任何內建 BigInteger 库， 也不能直接将输入的字符串转换为整数形式

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-strings
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    string addStrings(string num1, string num2) {
        string res;

        int n = num1.size(), m = num2.size(), sum = 0;
        n < m ? num1.insert(0, m - n, '0') : num2.insert(0, n - m, '0'); //补0，如1314 + 520 补0后成 1314 + 0520

        for (int i = num1.size() - 1; i >= 0 ; i --) 
        {
            sum = (num1[i] - '0') + (num2[i] - '0') + sum / 10; //从高位开始遍历，相当于10进制相加
            res += char (sum % 10 + '0');
        }
        
        if (sum / 10 == 1) res += '1';
        reverse(res.begin(), res.end());
        return res;
    }
}; */

/* 模拟十进制的加法 */

/* class Solution {
public:
    string addStrings(string num1, string num2) {
        string res;
        bool flag=false;

        int n = num1.size(), m = num2.size(), sum = 0;
        n < m ? num1.insert(0, m - n, '0') : num2.insert(0, n - m, '0'); //补0，如1314 + 520 补0后成 1314 + 0520

        for (int i = num1.size() - 1; i >= 0 ; i --) 
        {
            sum = (num1[i] - '0') + (num2[i] - '0') + flag; //从高位开始遍历，相当于10进制相加
            flag=sum>=10 ?true:false;
            res=res+char(sum%10+'0');
            sum=0;
        }
        if(flag) res=res+'1';
        reverse(res.begin(),res.end());
        return res;

        
    }
}; */