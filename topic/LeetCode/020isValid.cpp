/* ����һ��ֻ���� '('��')'��'{'��'}'��'['��']'?���ַ������ж��ַ����Ƿ���Ч��

��Ч�ַ��������㣺

�����ű�������ͬ���͵������űպϡ�
�����ű�������ȷ��˳��պϡ�
ע����ַ����ɱ���Ϊ����Ч�ַ�����

ʾ�� 1:

����: "()"
���: true
ʾ��?2:

����: "()[]{}"
���: true
ʾ��?3:

����: "(]"
���: false
ʾ��?4:

����: "([)]"
���: false
ʾ��?5:

����: "{[]}"
���: true

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/valid-parentheses
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
   unordered_map<char, char> um = {
            {'{', '}'},
            {'(', ')'},
            {'[', ']'}
    };

    bool isValid(string s) {
        if (s.empty())
        {
            return true;
        } 
        else if (s.size() % 2) 
        {
            return false;
        } 
        else 
        {
            stack<char> ss;
            for (int i = 0; i < s.size(); i ++) 
            {
                if (ss.empty()) 
                {
                    ss.push(s[i]);
                } 
                else 
                {
                    if (s[i] == um[ss.top()]) 
                    {
                        ss.pop();
                    }
                     else 
                    {
                        ss.push(s[i]);
                    }
                }
            }
            return ss.empty();
        }        
    }
}; */

/* ʹ�ù�ϣ���������ϣ���ȱ������еĽ����ʹ��ջ��ȷ����ֵ��ʾֵ�Ĺ�ϵ */