/* ����һ���ַ���������һ��ѧ���ĳ��ڼ�¼�������¼���������������ַ���

'A' : Absent��ȱ��
'L' : Late���ٵ�
'P' : Present������
���һ��ѧ���ĳ��ڼ�¼�в�����һ��'A'(ȱ��)���Ҳ���������������'L'(�ٵ�),��ô���ѧ���ᱻ���͡�

����Ҫ�������ѧ���ĳ��ڼ�¼�ж����Ƿ�ᱻ���͡�

ʾ�� 1:

����: "PPALLP"
���: True
ʾ�� 2:

����: "PPALLL"
���: False

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/student-attendance-record-i
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool checkRecord(string s) {
        int A_num=0;
        int L_num=0;
        for(auto c :s)
        {
            if(c=='A')
            {
                A_num++;
                L_num=0;
            }
            else if(c=='L') L_num++;
            else L_num=0;
        if(L_num>2||A_num>1) return false;
        }
        return true;
    }
}; */

/* ����������L�����ӣ�ע���ж�������λ�� */

/* class Solution {
public:
    bool checkRecord(string s) {
        int A_num=0;
        int L_num=0;
        for(auto c :s)
        {
            if(c=='A') A_num++;
            if(c=='L') L_num++;
        }

        if(A_num>1) return false;
        else
        {
            if(L_num<3) return true;
            else
            {
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')
                    return false;
                }
            }
        }
      return true;     
    }       
}; */

/* ��һ��İ취 */