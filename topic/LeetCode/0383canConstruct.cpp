/* ����һ������� (ransom) �ַ�����һ����־(magazine)�ַ������жϵ�һ���ַ��� ransom �ܲ����ɵڶ����ַ��� magazines ������ַ����ɡ�������Թ��ɣ����� true �����򷵻� false��

(��Ŀ˵����Ϊ�˲���¶������ּ���Ҫ����־������������Ҫ����ĸ����ɵ����������˼����־�ַ����е�ÿ���ַ�ֻ����������ַ�����ʹ��һ�Ρ�)

?

ע�⣺

����Լ��������ַ�����ֻ����Сд��ĸ��

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/ransom-note
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>map;
        for(int i=0;i<magazine.size();i++)
        {
            map[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++)
        {
            map[ransomNote[i]]--;
            if(map[ransomNote[i]]<0) return false;
        }
        return true;
    }
}; */