/* ʵ��?strStr()?������

����һ��?haystack �ַ�����һ�� needle �ַ������� haystack �ַ������ҳ� needle �ַ������ֵĵ�һ��λ�� (��0��ʼ)����������ڣ��򷵻�? -1��

ʾ�� 1:

����: haystack = "hello", needle = "ll"
���: 2
ʾ�� 2:

����: haystack = "aaaaa", needle = "bba"
���: -1
˵��:

��?needle?�ǿ��ַ���ʱ������Ӧ������ʲôֵ�أ�����һ���������кܺõ����⡣

���ڱ�����ԣ���?needle?�ǿ��ַ���ʱ����Ӧ������ 0 ������C���Ե�?strstr()?�Լ� Java��?indexOf()?���������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/implement-strstr
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */
/* class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        while(haystack[i]!='\0'&&needle[j]!='\0')
        {
            if(haystack[i]==needle[j])
            {
                i++;
                j++;
            }
            else
            {
                i=i-j+1;
                j=0;
            }
        }
        if(j==needle.length())
        return i-j;
        return -1;
    }
}; */

/* ��KMP�㷨���С���ˣ���˫ָ��Ƚϼ�����⣬�ؼ�����ƥ��ʧ�ܺ�󴮵���������˵��ָ��Ӧ�������� */