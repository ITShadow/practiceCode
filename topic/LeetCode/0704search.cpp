/* ����һ��?n?��Ԫ������ģ�������������?nums ��һ��Ŀ��ֵ?target ?��дһ����������?nums?�е� target�����Ŀ��ֵ���ڷ����±꣬���򷵻� -1��


ʾ�� 1:

����: nums = [-1,0,3,5,9,12], target = 9
���: 4
����: 9 ������ nums �в����±�Ϊ 4
ʾ��?2:

����: nums = [-1,0,3,5,9,12], target = 2
���: -1
����: 2 ������ nums ����˷��� -1
?

��ʾ��

����Լ��� nums?�е�����Ԫ���ǲ��ظ��ġ�
n?����?[1, 10000]֮�䡣
nums?��ÿ��Ԫ�ض�����?[-9999, 9999]֮�䡣

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/binary-search
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) r=mid-1;
            else if(nums[mid]<target) l=mid+1;
        }
        return -1;
    }
}; */

/* ���ֵĶ��ֲ��� */