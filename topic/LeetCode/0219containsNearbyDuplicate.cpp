/* 给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，使得 nums [i] = nums [j]，并且 i 和 j 的差的 绝对值 至多为 k。

 

示例 1:

输入: nums = [1,2,3,1], k = 3
输出: true
示例 2:

输入: nums = [1,0,1,1], k = 1
输出: true
示例 3:

输入: nums = [1,2,3,1,2,3], k = 2
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/contains-duplicate-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/* class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         for(int i = 0; i < nums.size(); i++)
            for(int j = i+1; j <= i+k && j < nums.size(); j++)
                if(nums[i] == nums[j])
                    return true;

        return false;
    }
}; */
/* 暴力解法，超时 */

/* class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                int distance=i-mp[nums[i]];
                if(distance<=k) return true;
                mp[nums[i]] = i; 
            }

            else mp[nums[i]]=i;
        }
        return false;
    }
}; */

/* 哈希表操作，有点骚 */