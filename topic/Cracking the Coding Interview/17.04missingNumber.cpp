/* ����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������

ע�⣺�����������ԭ�������Ķ�

ʾ�� 1��

���룺[3,0,1]
�����2
?

ʾ�� 2��

���룺[9,6,4,2,3,5,7,0,1]
�����8

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/missing-number-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(;i<nums.size();i++)
        {
            if(nums[i]!=i) break;
        }
        return i;
    }
}; */