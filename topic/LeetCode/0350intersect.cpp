/* �����������飬��дһ���������������ǵĽ�����

?

ʾ�� 1��

���룺nums1 = [1,2,2,1], nums2 = [2,2]
�����[2,2]
ʾ�� 2:

���룺nums1 = [4,9,5], nums2 = [9,4,9,8,4]
�����[4,9]
?

˵����

��������ÿ��Ԫ�س��ֵĴ�����Ӧ��Ԫ�������������г��ִ�������Сֵһ�¡�
���ǿ��Բ�������������˳��
���ף�

��������������Ѿ��ź����أ��㽫����Ż�����㷨��
���?nums1?�Ĵ�С��?nums2?С�ܶ࣬���ַ������ţ�
���?nums2?��Ԫ�ش洢�ڴ����ϣ������ڴ������޵ģ������㲻��һ�μ������е�Ԫ�ص��ڴ��У������ô�죿

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/intersection-of-two-arrays-ii
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i=0,j=0;
        vector<int>res;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
            res.push_back(nums1[i]);
            i++;
            j++;
            }
            else if(nums1[i]>nums2[j])
            j++;
            else
            i++;
        }
        return res;
    }
}; */

/* �������һ�Ƚ� */