/* 给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。

示例:

输入: 38
输出: 2 
解释: 各位相加的过程为：3 + 8 = 11, 1 + 1 = 2。 由于 2 是一位数，所以返回 2。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-digits
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    int addDigits(int num) {
        if(num>9)
        {
            num=num%9;
            if(num==0) return 9;
        }
        return num;
    }
}; */

/* 这是LeetCode上一个秀到我头皮发麻的操作，具体思想是每次按照相加方法后得到的结果与原来相比的结果
总是9的倍数 */