/* ����һ���������� nums������ѡ�������������ͬ�±� i �� j��ʹ (nums[i]-1)*(nums[j]-1) ȡ�����ֵ��

������㲢���ظ�ʽ�����ֵ��

?

ʾ�� 1��

���룺nums = [3,4,5,2]
�����12 
���ͣ����ѡ���±� i=1 �� j=2���±�� 0 ��ʼ��������Ի�����ֵ��(nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12 �� 
ʾ�� 2��

���룺nums = [1,5,4,5]
�����16
���ͣ�ѡ���±� i=1 �� j=3���±�� 0 ��ʼ��������Ի�����ֵ (5-1)*(5-1) = 16 ��
ʾ�� 3��

���룺nums = [3,7]
�����12
?

��ʾ��

2 <= nums.length <= 500
1 <= nums[i] <= 10^3

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/maximum-product-of-two-elements-in-an-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        return (nums[nums.size()-1]-1)* (nums[nums.size()-2]-1);
    }
}; */