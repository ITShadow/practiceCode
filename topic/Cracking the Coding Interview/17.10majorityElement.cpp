/* ������ռ�ȳ���һ���Ԫ�س�֮Ϊ��ҪԪ�ء�����һ���������飬�ҵ�������ҪԪ�ء���û�У�����-1��

ʾ�� 1��

���룺[1,2,5,9,5,9,5,5,5]
�����5
?

ʾ�� 2��

���룺[3,2]
�����-1
?

ʾ�� 3��

���룺[2,2,1,1,1,2,2]
�����2
?

˵����
���а취��ʱ�临�Ӷ�Ϊ O(N)���ռ临�Ӷ�Ϊ O(1) �������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/find-majority-element-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;

        for(auto c:nums) mp[c]++;

        for(auto c:mp)
        {
            if(c.second>nums.size()/2) return c.first;
        }
        return -1;
    }
}; */