/* ����һ������ 0, 1, 2, ..., n?��?n?���������У��ҳ� 0 .. n?��û�г����������е��Ǹ�����

?

ʾ�� 1:

����: [3,0,1]
���: 2
ʾ��?2:

����: [9,6,4,2,3,5,7,0,1]
���: 8
?

˵��:
����㷨Ӧ��������ʱ�临�Ӷȡ����ܷ��ʹ�ö��ⳣ���ռ���ʵ��?

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/missing-number
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i) return i; 
        }
        return nums.size();
    }
}; */