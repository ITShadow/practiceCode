/* ������������������ A �� B������ A ��ĩ�����㹻�Ļ���ռ����� B�� ��дһ���������� B �ϲ��� A ������

��ʼ��?A �� B ��Ԫ�������ֱ�Ϊ?m �� n��

ʾ��:

����:
A = [1,2,3,0,0,0], m = 3
B = [2,5,6],       n = 3

���:?[1,2,2,3,5,6]
˵��:

A.length == n + m

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/sorted-merge-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */
/* class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&&j>=0)
        {
            if(A[i]<B[j])
            {
                A[k]=B[j];
                j--;
            }
            else
            {
                A[k]=A[i];
                i--;
            }
            k--;
        }
        while(j>=0)
        {
            A[k]=B[j];
            j--;
            k--;
        }

    }
}; */

/* �ؼ�����������������ģ������������ */