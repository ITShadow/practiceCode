/* �ڴ�СΪ 2N?������ A?���� N+1 ����ͬ��Ԫ�أ�������һ��Ԫ���ظ��� N �Ρ�

�����ظ��� N?�ε��Ǹ�Ԫ�ء�

?

ʾ�� 1��

���룺[1,2,3,3]
�����3
ʾ�� 2��

���룺[2,1,2,5,3,2]
�����2
ʾ��?3��

���룺[5,1,5,2,5,3,5,4]
�����5
?

��ʾ��

4 <= A.length <= 10000
0 <= A[i] < 10000
A.length?Ϊż��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/n-repeated-element-in-size-2n-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> mp;

        for(auto c :A) mp[c]++;

        for(auto iter=mp.begin();iter!=mp.end();iter++)
        {
            if(iter->second==A.size()/2) return iter->first;
        }
        return -1;
    }
}; */

/* ��ϣ��ļ򵥲��� */