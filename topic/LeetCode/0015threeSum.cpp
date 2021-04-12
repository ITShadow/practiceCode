/* 给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有和为 0 且不重复的三元组。

注意：答案中不可以包含重复的三元组。

 

示例 1：

输入：nums = [-1,0,1,2,-1,-4]
输出：[[-1,-1,2],[-1,0,1]]
示例 2：

输入：nums = []
输出：[]
示例 3：

输入：nums = [0]
输出：[]
 

提示：

0 <= nums.length <= 3000
-105 <= nums[i] <= 105

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/3sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;

        int n = nums.size();
        if (n < 3) return res;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i ++ )
        {
            if (nums[i] > 0) return res;                    
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                if (nums[i] + nums[l] + nums[r] == 0)
                {
                    res.push_back({nums[i], nums[l], nums[r]});        
                    while (l < r && nums[l] == nums[l + 1]) l ++ ;     
                    while (l < r && nums[r] == nums[r - 1]) r -- ;
                    l ++ ;                                            
                    r -- ;                                             
                }
                else if (nums[i] + nums[l] + nums[r] > 0)
                {
                    r -- ;      //和大于0，要减少总和之值，即右指针后退
                }
                else
                {
                    l ++ ;      //和小于0，要增加总和之值，即左指针前进
                }
            }
        }

        return res;
    }
};
 */