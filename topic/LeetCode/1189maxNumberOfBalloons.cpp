/* ����һ���ַ���?text������Ҫʹ�� text �е���ĸ��ƴ�վ����ܶ�ĵ���?"balloon"�����򣩡�

�ַ���?text �е�ÿ����ĸ���ֻ�ܱ�ʹ��һ�Ρ����㷵��������ƴ�ճ����ٸ�����?"balloon"��

?

ʾ�� 1��



���룺text = "nlaebolko"
�����1
ʾ�� 2��



���룺text = "loonbalxballpoon"
�����2
ʾ�� 3��

���룺text = "leetcode"
�����0
?

��ʾ��

1 <= text.length <= 10^4
text?ȫ����СдӢ����ĸ���

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/maximum-number-of-balloons
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;

        for(auto c : text) mp[c]++;

        return min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});
        
          
        
    }
}; */

/* ��ϣ���¼���ִ����������ĸ���ִ������ٵľ��� */