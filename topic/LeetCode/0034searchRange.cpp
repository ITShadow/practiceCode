/* ����һ�������������е��������� nums����һ��Ŀ��ֵ target���ҳ�����Ŀ��ֵ�������еĿ�ʼλ�úͽ���λ�á�

����㷨ʱ�临�Ӷȱ�����?O(log n) ����

��������в�����Ŀ��ֵ������?[-1, -1]��

ʾ�� 1:

����: nums = [5,7,7,8,8,10], target = 8
���: [3,4]
ʾ��?2:

����: nums = [5,7,7,8,8,10], target = 6
���: [-1,-1]

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/find-first-and-last-position-of-element-in-sorted-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(nums[mid]>target)
            {
                right=mid-1;
            }
            else if(nums[mid]<target)
            {
                left=mid+1;
            }
             
            else if(nums[mid]==target)
            {
                if(nums[right]>target) right--;
                else if(nums[left]<target) left++;

                if(nums[left]==target&&nums[right]==target)
                return vector<int>({left,right});

            }

        }
        return vector<int>({-1,-1});
    }
}; */

/* ���ֲ��ҵľ���Ӧ�ã�������������Ӧ���뵽���ֲ��� */