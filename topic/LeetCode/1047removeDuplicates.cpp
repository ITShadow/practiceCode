/* ������Сд��ĸ��ɵ��ַ���?S���ظ���ɾ��������ѡ��������������ͬ����ĸ����ɾ�����ǡ�

�� S �Ϸ���ִ���ظ���ɾ��������ֱ���޷�����ɾ����

����������ظ���ɾ�������󷵻����յ��ַ������𰸱�֤Ψһ��

?

ʾ����

���룺"abbaca"
�����"ca"
���ͣ�
���磬�� "abbaca" �У����ǿ���ɾ�� "bb" ��������ĸ��������ͬ�����Ǵ�ʱΨһ����ִ��ɾ���������ظ��֮�����ǵõ��ַ��� "aaca"��������ֻ�� "aa" ����ִ���ظ���ɾ�����������������ַ���Ϊ "ca"��
?

��ʾ��

1 <= S.length <= 20000
S ����СдӢ����ĸ��ɡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/remove-all-adjacent-duplicates-in-string
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    string removeDuplicates(string S) {
              string ans = "";
        for (auto& ch : S) {
            if (ans.empty() || ch != ans.back()) ans.push_back(ch);
            else ans.pop_back();
        }
        return ans;
    }
}; */

/* ������ͬ�ľ��� */