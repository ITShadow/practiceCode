/* ����һ���ַ�������дһ�������ж����Ƿ�Ϊĳ�����Ĵ�������֮һ��

���Ĵ���ָ������������һ���ĵ��ʻ���������ָ��ĸ���������С�

���Ĵ���һ�����ֵ䵱�еĵ��ʡ�

?

ʾ��1��

���룺"tactcoa"
�����true��������"tacocat"��"atcocta"���ȵȣ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/palindrome-permutation-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool canPermutePalindrome(string s) {
         map<char, int> m;

        for(int i = 0; i < s.size(); ++i)
        {
            ++m[s[i]];
        }

        int odd_count = 0;
        for(auto iter = m.begin(); iter != m.end(); ++iter)
        {
            if(iter->second % 2 != 0)
            {
                ++odd_count;
            }
        }

        if(s.size() % 2 == 0)
        {
            if(odd_count == 0) //�ַ�����ȫΪż����
                return true;
        }
        else
        {
            if(odd_count == 1) //�����ε��ַ�����һ��
                return true;
        }
        return false;
    }
}; */

/* ע����Ŀ����Ҫ���̫���� */