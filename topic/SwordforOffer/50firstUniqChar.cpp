/* ���ַ��� s ���ҳ���һ��ֻ����һ�ε��ַ������û�У�����һ�����ո� s ֻ����Сд��ĸ��

ʾ��:

s = "abaccdeff"
���� "b"

s = "" 
���� " "

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    char firstUniqChar(string s) {
        if(s=="") return ' ';
        unordered_map<char,int> mp;

        for(auto c:s) mp[c]++;

        
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==1) return s[i];
            
        }
        return ' ';
    }
}; */

/* ��ϣ����������ش���Ϊһ��ֵ */