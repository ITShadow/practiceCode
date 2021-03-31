/* 给定一个含有 n 个正整数的数组和一个正整数 target 。

找出该数组中满足其和 ≥ target 的长度最小的 连续子数组 [numsl, numsl+1, ..., numsr-1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0 。

 

示例 1：

输入：target = 7, nums = [2,3,1,2,4,3]
输出：2
解释：子数组 [4,3] 是该条件下的长度最小的子数组。
示例 2：

输入：target = 4, nums = [1,4,4]
输出：1
示例 3：

输入：target = 11, nums = [1,1,1,1,1,1,1,1]
输出：0
 

提示：

1 <= target <= 109
1 <= nums.length <= 105
1 <= nums[i] <= 105
 

进阶：

如果你已经实现 O(n) 时间复杂度的解法, 请尝试设计一个 O(n log(n)) 时间复杂度的解法。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-size-subarray-sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        // 累计和
        int sum = 0;
        // 窗口的左右边缘
        int l = 0;
        int r = 0;
        // 最小长度的记录，即结果
        int res = INT_MAX;
        // 这里i其实就是窗口的r的右边缘
        for (int r = 0; r < n; ++r)
        {
            sum += nums[r];
            while (sum >= target)
            {
                res = min(res, r-l+1);
                sum -= nums[l];
                ++l;
            }
        }
        // 考虑不存在满足的情况，直接返回0
        return res == INT_MAX ? 0 : res;
    }
};
 */