/* �����������飬��дһ���������������ǵĽ�����

?

ʾ�� 1��

���룺nums1 = [1,2,2,1], nums2 = [2,2]
�����[2]
ʾ�� 2��

���룺nums1 = [4,9,5], nums2 = [9,4,9,8,4]
�����[9,4]
?

˵����

�������е�ÿ��Ԫ��һ����Ψһ�ġ�
���ǿ��Բ�������������˳��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/intersection-of-two-arrays
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */
/* 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(),nums1.end());
        vector<int> res;
        for(auto i : nums2)
        {
            if(s.erase(i))
            res.push_back(i);
        }
        return res;
    }
}; */

/* ��set�������� */