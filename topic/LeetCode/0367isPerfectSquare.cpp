/* ����һ�������� num����дһ����������� num ��һ����ȫƽ�������򷵻� True�����򷵻� False��

˵������Ҫʹ���κ����õĿ⺯������? sqrt��

ʾ�� 1��

���룺16
�����True
ʾ�� 2��

���룺14
�����False

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/valid-perfect-square
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool isPerfectSquare(int num) {
        long l=1,r=num;
        while(l<=r)
        {
           long mid=l+(r-l)/2;
            if(mid*mid==num) return true;
            else if(mid*mid>num) r=mid-1;
            else l=mid+1;
        }
        return false;
    }
}; */

/* ��ͨ���ֲ����ң�ע���������� */