/* ����һ���ǿ����飬���ش������е������������������ڣ��򷵻���������������Ҫ���㷨ʱ�临�Ӷȱ�����O(n)��

ʾ�� 1:

����: [3, 2, 1]

���: 1

����: ����������� 1.
ʾ�� 2:

����: [1, 2]

���: 2

����: ���������������, ���Է��������� 2 .
ʾ�� 3:

����: [2, 2, 3, 1]

���: 1

����: ע�⣬Ҫ�󷵻ص������������ָ��������Ψһ���ֵ�����
��������ֵΪ2���������Ƕ��ŵڶ���

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/third-maximum-number
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> hash_set;
        
        for(auto n:nums){
            hash_set.insert(n);
            if(hash_set.size()>3)
                hash_set.erase(*(hash_set.begin()));
        }
        if(hash_set.size()<3)
            return *(hash_set.rbegin());
        else
            return *(hash_set.begin());
    }
}; */