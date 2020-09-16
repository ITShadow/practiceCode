/* 给定一个整数数组 a，其中1 ≤ a[i] ≤ n （n为数组长度）, 其中有些元素出现两次而其他元素出现一次。

找到所有出现两次的元素。

你可以不用到任何额外空间并在O(n)时间复杂度内解决这个问题吗？

示例：

输入:
[4,3,2,7,8,2,3,1]

输出:
[2,3]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-all-duplicates-in-an-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int>res;

        for(auto c:nums) mp[c]++;

        for(auto c:mp)
        {
            if(c.second>1)
            res.push_back(c.first);
        }
        return res;
    }
}; */
/* 用哈希表操作，思路简单直接，但是时间与空间消耗过大，不可取 */

/* class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int tmp;
        for(auto n:nums){
            tmp = abs(n);
            if(nums[tmp-1]<0)
                ans.push_back(tmp);
            else
                nums[tmp-1] = -nums[tmp-1];
        }
        return ans;
    }
}; */

/* 这个方法我也没怎么想明白，是我太菜了吗？ */