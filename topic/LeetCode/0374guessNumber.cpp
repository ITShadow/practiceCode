/* ����������һ����������Ϸ�� ��Ϸ�������£�
�Ҵ�?1?��?n?ѡ��һ�����֡� ����Ҫ����ѡ�����ĸ����֡�
ÿ����´��ˣ��һ��������������Ǵ��˻���С�ˡ�
�����һ��Ԥ�ȶ���õĽӿ�?guess(int num)�����᷵�� 3 �����ܵĽ����-1��1?�� 0����

-1 : �ҵ����ֱȽ�С
 1 : �ҵ����ֱȽϴ�
 0 : ��ϲ����¶��ˣ�
?

ʾ�� :

����: n = 10, pick = 6
���: 6

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/guess-number-higher-or-lower
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

/* class Solution {
public:
    int guessNumber(int n) {
        int l=1,r=n;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            int res=guess(mid);
            if(res==0) return mid;
            else if(res==-1) r=mid-1;
            else if(res==1) l=mid+1;
        }
        return 0;
    }
}; */
/* #define target 30;
int guess(int num)
{
    if(num==target) return 0;
    else if(num>target) return -1;
    else if(num<target) return 1;
} */

/* ���ֲ��һ������� */