/* ����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�

�������һֵ�������г����������Σ��������� true �����������ÿ��Ԫ�ض�����ͬ���򷵻� false ��

?

ʾ�� 1:

����: [1,2,3,1]
���: true
ʾ�� 2:

����: [1,2,3,4]
���: false
ʾ��?3:

����: [1,1,1,3,3,4,3,2,4,2]
���: true

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/contains-duplicate
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto c:nums) mp[c]++;

        for(auto iter=mp.begin();iter!=mp.end();iter++)
        {
            if(iter->second>1) return true;
        }
        return false;
    }
}; */