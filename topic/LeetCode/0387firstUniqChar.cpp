/* ����һ���ַ������ҵ����ĵ�һ�����ظ����ַ���������������������������ڣ��򷵻� -1��

?

ʾ����

s = "leetcode"
���� 0

s = "loveleetcode"
���� 2
?

��ʾ������Լٶ����ַ���ֻ����Сд��ĸ

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/first-unique-character-in-a-string
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;

        for(auto c :s)  mp[c]++;

        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==1) return i;
        }
        return -1;
            
        
    }
}; */

/* ��ϣ��ͳ�� */