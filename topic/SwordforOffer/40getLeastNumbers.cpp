/* ������������ arr ���ҳ�������С�� k ���������磬����4��5��1��6��2��7��3��8��8�����֣�����С��4��������1��2��3��4��

?

ʾ�� 1��

���룺arr = [3,2,1], k = 2
�����[1,2] ���� [2,1]
ʾ�� 2��

���룺arr = [0,1,2,1], k = 1
�����[0]
?

���ƣ�

0 <= k <= arr.length <= 10000
0 <= arr[i]?<= 10000

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/zui-xiao-de-kge-shu-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<int>res;
        for(int i=0;i<k;i++)
        {
            res.push_back(arr[i]);
        }
        return res;
    }
}; */

/* �����ѡ��С */