/* ���谴�����������������Ԥ��δ֪��ĳ�����Ͻ�������ת��

( ���磬����?[0,1,2,4,5,6,7] ���ܱ�Ϊ?[4,5,6,7,0,1,2]?)��

���ҳ�������С��Ԫ�ء�

ע�������п��ܴ����ظ���Ԫ�ء�

ʾ�� 1��

����: [1,3,5]
���: 1
ʾ��?2��

����: [2,2,2,0,1]
���: 0
˵����

�������?Ѱ����ת���������е���Сֵ?��������Ŀ��
�����ظ���Ӱ���㷨��ʱ�临�Ӷ��𣿻����Ӱ�죬Ϊʲô��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array-ii
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        while (low < high) {
            int pivot = low + (high - low) / 2;
            if (nums[pivot] < nums[high]) {
                high = pivot;
            }
            else if (nums[pivot] > nums[high]) {
                low = pivot + 1;
            }
            else {
                high -= 1;
            }
        }
        return nums[low];
    }
}; */
/* ���ֲ���ģ��� */