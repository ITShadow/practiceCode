/* ��дһ�����������ַ�����Ϊ���룬��ת���ַ����е�Ԫ����ĸ��

ʾ�� 1:

����: "hello"
���: "holle"
ʾ�� 2:

����: "leetcode"
���: "leotcede"
˵��:
Ԫ����ĸ��������ĸ"y"��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/reverse-vowels-of-a-string
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    string reverseVowels(string s) {
         if(s.empty()) return s;
        int l=0,r=s.size()-1;
        while(l<=r)
        {
            if(check(s[l])&&!check(s[r]))
            {
                r--;
            }
            else if(!check(s[l])&&check(s[r]))
            {
                l++;
            }
            else
            {
                if(check(s[l])&&check(s[r])) swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }

    bool check(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return true;
        else return false;
    }

}; */


/* ��Ŀ�ʵĺ��鷳��ʵ�ʺܼ� */