/* ����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�

����Լ������������ظ�Ԫ�ء�

ʾ�� 1:

����: [1,3,5,6], 5
���: 2
ʾ��?2:

����: [1,3,5,6], 2
���: 1
ʾ�� 3:

����: [1,3,5,6], 7
���: 4
ʾ�� 4:

����: [1,3,5,6], 0
���: 0

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/search-insert-position
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */
/* 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid=0;
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(target==nums[mid]) return mid;

            if(target>nums[mid]) l=mid+1;
            else  r=mid-1;
        }
        return l;
    }
}; */

/* ���ֲ��� */