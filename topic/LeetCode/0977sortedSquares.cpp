/* ����һ�����ǵݼ�˳��������������� A������ÿ�����ֵ�ƽ����ɵ������飬Ҫ��Ҳ���ǵݼ�˳������

?

ʾ�� 1��

���룺[-4,-1,0,3,10]
�����[0,1,9,16,100]
ʾ�� 2��

���룺[-7,-3,2,3,11]
�����[4,9,9,49,121]
?

��ʾ��

1 <= A.length <= 10000
-10000 <= A[i] <= 10000
A?�Ѱ��ǵݼ�˳������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/squares-of-a-sorted-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int length=A.size();
        vector<int>res(length);
        int i=0,j=length-1,k=length-1;
        while(k>=0)
        {
            int left=A[i] * A[i];
            int right=A[j] * A[j];
            if(left<right)
            {
                res[k]=right;
                j--;
            }
            else
            {
                res[k]=left;
                i++;
            }
            k--;
        }
        return res;
    }
}; */
/* ���˵�ƽ���϶���һ����� */