/* URL������дһ�ַ��������ַ����еĿո�ȫ���滻Ϊ%20���ٶ����ַ���β�����㹻�Ŀռ��������ַ�������֪���ַ����ġ���ʵ�����ȡ���ע����Javaʵ�ֵĻ�����ʹ���ַ�����ʵ�֣��Ա�ֱ���������ϲ�������

ʾ��1:

 ���룺"Mr John Smith    ", 13
 �����"Mr%20John%20Smith"
ʾ��2:

 ���룺"               ", 5
 �����"%20%20%20%20%20"
��ʾ��

�ַ���������[0, 500000]��Χ�ڡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/string-to-url-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    string replaceSpaces(string S, int length) {
        string res; int i = 0;
        for (int i = 0; i < length ; i ++)
            if (S[i] == ' ') res += "%20";
            else res += S[i];
        return res;
    }
}; */