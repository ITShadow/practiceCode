/* ϡ�������������и��ź�����ַ������飬����ɢ����һЩ���ַ�������дһ�ַ������ҳ������ַ�����λ�á�

ʾ��1:

 ����: words = ["at", "", "", "", "ball", "", "", "car", "", "","dad", "", ""], s = "ta"
 �����-1
 ˵��: �����ڷ���-1��
ʾ��2:

 ���룺words = ["at", "", "", "", "ball", "", "", "car", "", "","dad", "", ""], s = "ball"
 �����4
��ʾ:

words�ĳ�����[1, 1000000]֮��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/sparse-array-search-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int findString(vector<string>& words, string s) {
       for(int i=0;i<words.size();i++)
       {
           if(words[i]==s) return i;
       }
       return -1;
    }
}; */
/* ������ֱ�ӱȶԣ��ַ�������ֱ�ӱȶ� */