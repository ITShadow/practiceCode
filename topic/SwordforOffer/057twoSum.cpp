/* ����һ����������������һ������s���������в�����������ʹ�����ǵĺ�������s������ж�����ֵĺ͵���s�����������һ�Լ��ɡ�

?

ʾ�� 1��

���룺nums = [2,7,11,15], target = 9
�����[2,7] ���� [7,2]
ʾ�� 2��

���룺nums = [10,26,30,31,47,60], target = 40
�����[10,30] ���� [30,10]
?

���ƣ�

1 <= nums.length <= 10^5
1 <= nums[i]?<= 10^6

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/he-wei-sde-liang-ge-shu-zi-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int sum, i = 0, j = nums.size()-1;
        while(i !=j)
        {
            sum = nums[i]+nums[j];
            if(sum==target)
            {
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                break;
            }
            if(sum>target) j--;
            else i++;
        }
        return result;
    }
}; */