/* ���� S �� T �����ַ����������Ƿֱ����뵽�հ׵��ı��༭�����ж϶����Ƿ���ȣ������ؽ���� # �����˸��ַ���

ע�⣺����Կ��ı������˸��ַ����ı�����Ϊ�ա�

?

ʾ�� 1��

���룺S = "ab#c", T = "ad#c"
�����true
���ͣ�S �� T ������ ��ac����
ʾ�� 2��

���룺S = "ab##", T = "c#d#"
�����true
���ͣ�S �� T ������ ������
ʾ�� 3��

���룺S = "a##c", T = "#a#c"
�����true
���ͣ�S �� T ������ ��c����
ʾ�� 4��

���룺S = "a#c", T = "b"
�����false
���ͣ�S ���� ��c������ T ��Ȼ�� ��b����
?

��ʾ��

1 <= S.length <= 200
1 <= T.length <= 200
S �� T ֻ����Сд��ĸ�Լ��ַ� '#'��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/backspace-string-compare
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool backspaceCompare(string S, string T) {
            stack<char> s1,s2;
        for(auto c : S)
        {
            if(c!='#') s1.push(c);
            else if(!s1.empty()) s1.pop(); 
        }
        for(auto d :T)
        {
            if(d!='#') s2.push(d);
            else if(!s2.empty()) s2.pop();
        }
        if(s1.size()>s2.size()||s1.size()<s2.size()) return false;
        else if(s1.empty()&&s2.empty()) return true;
        else
        {
            while(!s1.empty() && s1.top()==s2.top())
            {
                s1.pop();
                s2.pop();
            }
            if(s1.size()==0) return true;
            else return false;
                
            
        }
        
        
    }
}; */

/* ջ�����������ո��ǵ��� */