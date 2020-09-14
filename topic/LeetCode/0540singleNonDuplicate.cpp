/* ����һ��ֻ�����������������飬ÿ��Ԫ�ض���������Σ�Ψ��һ����ֻ�����һ�Σ��ҳ��������

ʾ�� 1:

����: [1,1,2,3,3,4,4,8,8]
���: 2
ʾ�� 2:

����: [3,3,7,7,10,11,11]
���: 10
ע��: ���ķ���Ӧ���� O(log n)ʱ�临�ӶȺ� O(1)�ռ临�Ӷ������С�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/single-element-in-a-sorted-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto c:nums) mp[c]++;

        for(auto iter=mp.begin();iter!=mp.end();iter++)
        {
            if(iter->second==1) return iter->first;
        }
        return -1;
    }
}; */

/* ��ϣ����� */
/* 
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size() - 1;
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (mid % 2 == 1) mid--;
            if (nums[mid] == nums[mid + 1]) {
                lo = mid + 2;
            } else {
                hi = mid;
            }
        }
        return nums[lo];
    }
}; */

/* ż�������Ķ��ֲ��� */