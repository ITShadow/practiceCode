/* ����һ����������?arr�������æͳ��������ÿ�����ĳ��ִ�����

���ÿ�����ĳ��ִ������Ƕ�һ�޶��ģ��ͷ���?true�����򷵻� false��

?

ʾ�� 1��

���룺arr = [1,2,2,1,1,3]
�����true
���ͣ��ڸ������У�1 ������ 3 �Σ�2 ������ 2 �Σ�3 ֻ������ 1 �Ρ�û���������ĳ��ִ�����ͬ��
ʾ�� 2��

���룺arr = [1,2]
�����false
ʾ�� 3��

���룺arr = [-3,0,1,-3,1,1,1,-3,10,0]
�����true
?

��ʾ��

1 <= arr.length?<= 1000
-1000 <= arr[i] <= 1000

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/unique-number-of-occurrences
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        set<int>se;
        
        for(auto c:arr) mp[c]++;

        for(auto c: mp) se.insert(c.second);

        return mp.size()==se.size();
    }
}; */

/* map������setȥ�� */