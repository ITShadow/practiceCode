/* ����һ����������Сд��ĸ�Ϳո�?' '?���ַ��� s�����������һ�����ʵĳ��ȡ�����ַ����������ҹ�����ʾ����ô���һ�����ʾ��������ֵĵ��ʡ�

������������һ�����ʣ��뷵�� 0?��

˵����һ��������ָ������ĸ��ɡ��������κοո��ַ��� ������ַ�����

?

ʾ��:

����: "Hello World"
���: 5

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/length-of-last-word
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size();
        int num=0;
        for(int i=len-1;i>=0;i--){
            if (s[i]!=' ')
                num++;
            else{
                if (num!=0)
                    return num;
            }
        }
        return num;
    }
}; */

/* ע��������һ���ǿո� */