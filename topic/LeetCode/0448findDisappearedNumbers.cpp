/* ����һ����Χ��? 1 �� a[i] �� n (?n = �����С ) �� �������飬�����е�Ԫ��һЩ���������Σ���һЩֻ����һ�Ρ�

�ҵ������� [1, n] ��Χ֮��û�г����������е����֡�

�����ڲ�ʹ�ö���ռ���ʱ�临�Ӷ�ΪO(n)�������������������? ����Լٶ����ص����鲻���ڶ���ռ��ڡ�

ʾ��:

����:
[4,3,2,7,8,2,3,1]

���:
[5,6]

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/find-all-numbers-disappeared-in-an-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto c :nums) mp[c]++;

        vector<int>res;

        for(int i=1;i<nums.size()+1;i++)
        {
            if(mp[i]==0) res.push_back(i);
        }
        return res;

    }
}; *//* ��ϣ������ʱ��ռ䶼�Ƚ��� */