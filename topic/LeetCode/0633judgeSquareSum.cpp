/* ����һ���Ǹ�����?c?����Ҫ�ж��Ƿ������������ a �� b��ʹ��?a2 + b2 = c��

ʾ��1:

����: 5
���: True
����: 1 * 1 + 2 * 2 = 5
?

ʾ��2:

����: 3
���: False

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/sum-of-square-numbers
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool judgeSquareSum(int c) {
        long left = 0;
        long right = (long)sqrt(c);
        while(left <= right)
        {
            long sum = left * left + right * right;
            if(sum == c)
                return true;
            else if(sum > c)
                right--;
            else
                left++;
        }
        return false;
    }
}; */

/* ���ֲ��ҵĲ��� */