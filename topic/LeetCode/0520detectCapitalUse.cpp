/* ����һ�����ʣ�����Ҫ�жϵ��ʵĴ�дʹ���Ƿ���ȷ��

���Ƕ��壬���������ʱ�����ʵĴ�д�÷�����ȷ�ģ�

ȫ����ĸ���Ǵ�д������"USA"��
������������ĸ�����Ǵ�д������"leetcode"��
������ʲ�ֻ����һ����ĸ��ֻ������ĸ��д��?����?"Google"��
�������Ƕ����������û����ȷʹ�ô�д��ĸ��

ʾ�� 1:

����: "USA"
���: True
ʾ�� 2:

����: "FlaG"
���: False

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/detect-capital
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool detectCapitalUse(string word) {
        int countUpper =0;
        for(auto temp : word)
        {
            if(isupper(temp)) countUpper++;
        }
        return countUpper==word.size() || countUpper==0 || countUpper==1&&isupper(word[0]);
    }
}; */

/* ��ע���������༴�� */