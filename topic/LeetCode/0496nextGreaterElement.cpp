/* �������� û���ظ�Ԫ�� ������?nums1 ��?nums2?������nums1?��?nums2?���Ӽ����ҵ�?nums1?��ÿ��Ԫ����?nums2?�е���һ��������ֵ��

nums1?������?x?����һ������Ԫ����ָ?x?��?nums2?�ж�Ӧλ�õ��ұߵĵ�һ����?x?���Ԫ�ء���������ڣ���Ӧλ����� -1 ��

?

ʾ�� 1:

����: nums1 = [4,1,2], nums2 = [1,3,4,2].
���: [-1,3,-1]
����:
    ����num1�е�����4�����޷��ڵڶ����������ҵ���һ����������֣������� -1��
    ����num1�е�����1���ڶ�������������1�ұߵ���һ���ϴ������� 3��
    ����num1�е�����2���ڶ���������û����һ����������֣������� -1��
ʾ�� 2:

����: nums1 = [2,4], nums2 = [1,2,3,4].
���: [3,-1]
����:
?   ���� num1 �е����� 2 ���ڶ��������е���һ���ϴ������� 3 ��
    ���� num1 �е����� 4 ���ڶ���������û����һ����������֣������� -1 ��
?

��ʾ��

nums1��nums2������Ԫ����Ψһ�ġ�
nums1��nums2?�������С��������1000��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/next-greater-element-i
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        stack<int>sk;
        unordered_map<int,int> mp;
        for(auto n:nums2)
        {
            while(!sk.empty()&&sk.top()<n)
            {
                mp[sk.top()]=n;
                sk.pop();
            }
            sk.push(n);
        }
        while(!sk.empty())
        {
            mp[sk.top()]=-1;
            sk.pop();
        }
        for(auto n:nums1)
        {
            res.push_back(mp[n]);
        }
        return res;
    }
}; */
/* ��ϣ�������ջ�ռ���ѹ�룬�ǿ���ջ����Ϊ��ֵ */