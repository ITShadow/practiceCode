/* ͳ���ַ����еĵ��ʸ���������ĵ���ָ���������Ĳ��ǿո���ַ���

��ע�⣬����Լٶ��ַ����ﲻ�����κβ��ɴ�ӡ���ַ���

ʾ��:

����: "Hello, my name is John"
���: 5
����: ����ĵ�����ָ�����Ĳ��ǿո���ַ������� "Hello," ���� 1 �����ʡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/number-of-segments-in-a-string
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int countSegments(string s) {
        bool mark = true;
        int count = 0;
        for(int i = 0 ;i<s.length();i++)
        {
            if(s[i]!=' '&&mark) {count++;mark = false;}
            else if(s[i]==' ') mark = true;
        }
        return count;
    }
}; */


/* class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);s��ʼ��ss
        int count =0;
        string str;
        while(ss>>str) count++; ��ss���뵽str

        return count;
    }
}; */