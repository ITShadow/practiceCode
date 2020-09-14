/* 给定一个整数数组和一个整数?k, 你需要在数组里找到不同的?k-diff 数对。这里将?k-diff?数对定义为一个整数对 (i, j), 其中 i 和 j 都是数组中的数字，且两数之差的绝对值是?k.

示例 1:

输入: [3, 1, 4, 1, 5], k = 2
输出: 2
解释: 数组中有两个 2-diff 数对, (1, 3) 和 (3, 5)。
尽管数组中有两个1，但我们只应返回不同的数对的数量。
示例?2:

输入:[1, 2, 3, 4, 5], k = 1
输出: 4
解释: 数组中有四个 1-diff 数对, (1, 2), (2, 3), (3, 4) 和 (4, 5)。
示例 3:

输入: [1, 3, 1, 5, 4], k = 0
输出: 1
解释: 数组中只有一个 0-diff 数对，(1, 1)。
注意:

数对 (i, j) 和数对?(j, i) 被算作同一数对。
数组的长度不超过10,000。
所有输入的整数的范围在?[-1e7, 1e7]。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/k-diff-pairs-in-an-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/* class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
          if(nums.size()<=1) return 0;//对于nums数组数量不足时，直接返回0
		sort(nums.begin(), nums.end());//对数组排序
		int count = 0;//统计个数
		for (int i=0;i<nums.size()-1;i++)//遍历
		{
			if (i > 0 && nums[i] == nums[i - 1]) continue;
			for (int j=i+1;j<nums.size();j++)
			{
				if (abs(nums[i]-nums[j])==k)
				{
					count++;
					break;//避免重复计算
				}
			}
		}
		return count;
	}
}; */