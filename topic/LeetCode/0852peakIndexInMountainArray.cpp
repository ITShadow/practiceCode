/* ���ǰѷ����������Ե�����?A?����ɽ����

A.length >= 3
���� 0 < i?< A.length - 1 ʹ��A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]
����һ��ȷ��Ϊɽ�������飬�����κ�����?A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]?�� i?��ֵ��

?

ʾ�� 1��

���룺[0,1,0]
�����1
ʾ�� 2��

���룺[0,2,1,0]
�����1
?

��ʾ��

3 <= A.length <= 10000
0 <= A[i] <= 10^6
A �����϶����ɽ��
?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/peak-index-in-a-mountain-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        if (A.empty())
        {
            return NULL;
        }
        //���ֲ���
        int l = 0, r = A.size()-1, mid;
        while (l <=r)
        {
            mid= l+(r-l)/2;
            if (A[mid-1]<A[mid] && A[mid]<A[mid+1])
            {
                l = mid + 1;
            }
            else if (A[mid-1]>A[mid] && A[mid]>A[mid+1])
            {
                r = mid - 1;
            }
            else
            {
                return mid;
            }  
        }
        return l;
    }
    
}; */

/* ���ֲ��ң�ע���ж��������� */