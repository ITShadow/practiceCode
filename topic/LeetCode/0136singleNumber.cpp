/* ����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�

˵����

����㷨Ӧ�þ�������ʱ�临�Ӷȡ� ����Բ�ʹ�ö���ռ���ʵ����

ʾ�� 1:

����: [2,2,1]
���: 1
ʾ��?2:

����: [4,1,2,1,2]
���: 4

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/single-number
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto c: nums) mp[c]++;

        int res=0;
        for(auto iter=mp.begin();iter!=mp.end();iter++)
        {
            if(iter->second==1) res=iter->first;
        }
        return res;
        
    }
}; */

/* �򵥵Ĺ�ϣ����� */