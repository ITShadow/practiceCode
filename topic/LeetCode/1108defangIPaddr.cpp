/* ����һ����Ч�� IPv4 ��ַ?address��������� IP ��ַ����Ч���汾��

��ν��Ч��?IP ��ַ����ʵ������?"[.]"?������ÿ�� "."��

?

ʾ�� 1��

���룺address = "1.1.1.1"
�����"1[.]1[.]1[.]1"
ʾ�� 2��

���룺address = "255.100.50.0"
�����"255[.]100[.]50[.]0"
?

��ʾ��

������?address?��һ����Ч�� IPv4 ��ַ

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/defanging-an-ip-address
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(auto s:address)
        {
            if(s=='.')
            res=res+"[.]";
            else
            res=res+s;
        }
        return res;
    }
}; */