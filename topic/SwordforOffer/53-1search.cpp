/* ͳ��һ�����������������г��ֵĴ�����

?

ʾ�� 1:

����: nums = [5,7,7,8,8,10], target = 8
���: 2
ʾ��?2:

����: nums = [5,7,7,8,8,10], target = 6
���: 0

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin=0;
        int end=nums.size()-1;
        int it=-1;
        while(end>=begin)
        {
            int mid=begin+(end-begin)/2;        
            if(nums[mid]>target)end=mid-1;
            else if(nums[mid]==target)
            {
                it=mid;
                break;
            }
            else begin=mid+1;
        }
        if(it==-1)return 0;
        int left=it;
        int right=it;
        while(left>=0&&nums[left]==target)left--;
        while(right<nums.size()&&nums[right]==target)right++;
        return right-left-1;
    }
}; */

/* ���ֲ��ң�ȷ���м�����ͷ�ж� */