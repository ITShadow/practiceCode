/* ��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�

?

����Լ��������Ƿǿյģ����Ҹ������������Ǵ��ڶ���Ԫ�ء�

?

ʾ��?1:

����: [1, 2, 3, 2, 2, 2, 5, 4, 2]
���: 2

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto c: nums) mp[c]++;

        for(auto c: mp) 
        {
            if(c.second>nums.size()/2) return c.first;
        }
        return -1;
    }
}; */