/* 给定一个包含 n 个整数的数组 nums 和一个目标值 target，判断 nums 中是否存在四个元素 a，b，c 和 d ，使得 a + b + c + d 的值与 target 相等？找出所有满足条件且不重复的四元组。

注意：答案中不可以包含重复的四元组。

 

示例 1：

输入：nums = [1,0,-1,0,-2,2], target = 0
输出：[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
示例 2：

输入：nums = [], target = 0
输出：[]
 

提示：

0 <= nums.length <= 200
-109 <= nums[i] <= 109
-109 <= target <= 109

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/4sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        if(nums.size()<4) return res;

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }

            for(int j=i+1;j<nums.size()-2;j++)
            {
                if(j>i+1&&nums[j]==nums[j-1])
                {
                    continue;
                }

                int l=j+1;
                int r=nums.size()-1;

                while(l<r)
                {
                    int sum=nums[i]+nums[j]+nums[l]+nums[r];

                    if(sum==target)
                    {
                        res.push_back({nums[i],nums[j],nums[l],nums[r]});

                        while(l<r&&nums[l]==nums[l+1]) l++;
                        while(l<r&&nums[r]==nums[r-1]) r--;

                        l++;
                        r--;
                    }

                    if(sum>target) r--;
                    if(sum<target) l++;
                }
            }
        }
        return res;
    }
}; */