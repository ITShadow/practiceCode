/* ����һ���ַ���?s?���ַ����ġ�����������Ϊ��ֻ����һ���ַ�����ǿ����ַ����ĳ��ȡ�

���㷵���ַ�����������

?

ʾ�� 1��

���룺s = "leetcode"
�����2
���ͣ����ַ��� "ee" ����Ϊ 2 ��ֻ�����ַ� 'e' ��
ʾ�� 2��

���룺s = "abbcccddddeeeeedcba"
�����5
���ͣ����ַ��� "eeeee" ����Ϊ 5 ��ֻ�����ַ� 'e' ��
ʾ�� 3��

���룺s = "triplepillooooow"
�����5
ʾ�� 4��

���룺s = "hooraaaaaaaaaaay"
�����11
ʾ�� 5��

���룺s = "tourist"
�����1
?

��ʾ��

1 <= s.length <= 500
s?ֻ����СдӢ����ĸ��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/consecutive-characters
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int maxPower(string s) {
      int count=1;
      int res=1;
      for(int i=1;i<s.size();i++)
      {
        if(s[i]==s[i-1]) 
        { 
            count++;
            res=max(res,count);
        }
        else 
        count=1; 
      }  
      return res;
    }
}; */
/* ������������Ҫ���£�û���������������� */