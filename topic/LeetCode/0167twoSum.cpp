/* ����һ���Ѱ�����������?���������飬�ҵ�������ʹ���������֮�͵���Ŀ������

����Ӧ�÷����������±�ֵ index1 �� index2������ index1?����С��?index2��

˵��:

���ص��±�ֵ��index1 �� index2�����Ǵ��㿪ʼ�ġ�
����Լ���ÿ������ֻ��ӦΨһ�Ĵ𰸣������㲻�����ظ�ʹ����ͬ��Ԫ�ء�
ʾ��:

����: numbers = [2, 7, 11, 15], target = 9
���: [1,2]
����: 2 �� 7 ֮�͵���Ŀ���� 9 ����� index1 = 1, index2 = 2 ��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */
/* 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j)
        {
            if(target==numbers[i]+numbers[j])
            return {i+1,j+1};
            else if(target>numbers[i]+numbers[j])
            i++;
            else
            j--;
        }
        return {-1,-1};
    }
}; */

/* ����˫ָ�� */