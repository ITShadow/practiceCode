/* ���������ַ��� s �� t ����дһ���������ж� t �Ƿ��� s ����ĸ��λ�ʡ�

ʾ��?1:

����: s = "anagram", t = "nagaram"
���: true
ʾ�� 2:

����: s = "rat", t = "car"
���: false
˵��:
����Լ����ַ���ֻ����Сд��ĸ��

����:
��������ַ������� unicode �ַ���ô�죿���ܷ������Ľⷨ��Ӧ�����������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/valid-anagram
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;
    }
}; */

/* class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) 
        {
            return false;
        }
        unordered_map<char,int> mp;

        for(auto c:s) mp[c]++;

        for(auto c:t) mp[c]--;

        for(auto iter=mp.begin();iter!=mp.end();iter++)
        {
            if(iter->second!=0) return false;
        }
        return true;
    }
}; */
/* ��ϣ�������ע�������ж����� */