/*����һ����������ֺ���ĸ���ַ��� s�����е���ĸ��ΪСдӢ����ĸ��

���㽫���ַ������¸�ʽ����ʹ���������������ַ������Ͷ���ͬ��Ҳ����˵����ĸ����Ӧ�ø������֣������ֺ���Ӧ�ø�����ĸ��

���㷵�� ���¸�ʽ���� ���ַ���������޷���Ҫ�����¸�ʽ�����򷵻�һ�� ���ַ��� ��

?

ʾ�� 1��

���룺s = "a0b1c2"
�����"0a1b2c"
���ͣ�"0a1b2c" ���������������ַ������Ͷ���ͬ�� "a0b1c2", "0a1b2c", "0c2a1b" Ҳ��������ĿҪ��Ĵ𰸡�
ʾ�� 2��

 ���룺s = "leetcode"
�����""
���ͣ�"leetcode" ��ֻ����ĸ�������޷��������¸�ʽ����������
ʾ�� 3��

���룺s = "1229857369"
�����""
���ͣ�"1229857369" ��ֻ�����֣������޷��������¸�ʽ����������
ʾ�� 4��

���룺s = "covid2019"
�����"c2o0v1i9d"
ʾ�� 5��

���룺s = "ab123"
�����"1a2b3"
?

��ʾ��

1 <= s.length <= 500
s ����СдӢ����ĸ��/��������ɡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/reformat-the-string
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    string reformat(string s) {
        string ans="";//��¼���
        if(s.empty()) return ans;

        string helpn="",helpc="";//�ֱ��¼�ַ���s�е����ֺ���ĸ
        for(char c:s)
        {
            if(isdigit(c)) helpn+=c;
            else helpc+=c;
        }

        int nlen=helpn.size(),clen=helpc.size();
        if(abs(nlen-clen)>1) return ans;//Ϊ������������֪�����ֺ���ĸ������������Ϊ1
        else
        {
            if(nlen>clen)//������ֵ������࣬��ô��һ���ַ������һ���ַ�Ϊ����
            {
            for(int i=0;i<clen;i++)
            {
                ans+=helpn[i];
                ans+=helpc[i];
            }
            ans+=helpn.back();
            }
            else if(nlen<clen)//�����ĸ�������࣬��ô��һ���ַ������һ���ַ�Ϊ��ĸ
            {
                for(int i=0;i<nlen;i++)
                {
                    ans+=helpc[i];
                    ans+=helpn[i];
                }
                 ans+=helpc.back();
            }
            else
            {
                for(int i=0;i<nlen;i++)
                {
                    ans+=helpc[i];
                    ans+=helpn[i];
                }
            }
        }
        return ans;
    }
}; */