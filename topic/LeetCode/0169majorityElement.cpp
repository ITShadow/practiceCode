/* ����һ����СΪ n �����飬�ҵ����еĶ���Ԫ�ء�����Ԫ����ָ�������г��ִ�������?? n/2 ??��Ԫ�ء�

����Լ��������Ƿǿյģ����Ҹ������������Ǵ��ڶ���Ԫ�ء�

?

ʾ��?1:

����: [3,2,3]
���: 3
ʾ��?2:

����: [2,2,1,1,1,2,2]
���: 2

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/majority-element
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto c:nums) mp[c]++;

        for(auto iter=mp.begin();iter!=mp.end();iter++)
        {
            if(iter->second>nums.size()/2) return iter->first;
        }
        return -1;
    }
}; */

/* ��ϣ��ļ򵥲��� */