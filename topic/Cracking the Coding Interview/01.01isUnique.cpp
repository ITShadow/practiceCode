/* ʵ��һ���㷨��ȷ��һ���ַ��� s �������ַ��Ƿ�ȫ����ͬ��

ʾ�� 1��

����: s = "leetcode"
���: false 
ʾ�� 2��

����: s = "abc"
���: true
���ƣ�

0 <= len(s) <= 100
����㲻ʹ�ö�������ݽṹ����ܼӷ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/is-unique-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    bool isUnique(string astr) {
        unordered_map<char,int> mp;

        for(auto c:astr) mp[c]++;

        for(auto c: mp) 
        {
            if(c.second>1) return false;
        }
        return true;
    }
}; */