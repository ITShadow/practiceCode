/* ���������ַ��� s1 �� s2�����дһ������ȷ������һ���ַ������ַ��������к��ܷ�����һ���ַ�����

ʾ�� 1��

����: s1 = "abc", s2 = "bca"
���: true 
ʾ�� 2��

����: s1 = "abc", s2 = "bad"
���: false
˵����

0 <= len(s1) <= 100
0 <= len(s2) <= 100

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/check-permutation-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        return s1==s2;
    }
}; */

/* ֱ������Ƚϼ��� */

/* class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        unordered_map<char,int> mp;

        for(auto c:s1)
        mp[c]++;

        for(auto d :s2)
        mp[d]--;

        unordered_map<char,int>::iterator iter;

        for(iter=mp.begin();iter!=mp.end();iter++)
        {
            if(iter->second!=0) return false;
        }
        return true;
    }
}; */

/* ��ϣ��Ƚ� */