/* 统计一个数字在排序数组中出现的次数。

?

示例 1:

输入: nums = [5,7,7,8,8,10], target = 8
输出: 2
示例?2:

输入: nums = [5,7,7,8,8,10], target = 6
输出: 0

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/* class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin=0;
        int end=nums.size()-1;
        int it=-1;
        while(end>=begin)
        {
            int mid=begin+(end-begin)/2;        
            if(nums[mid]>target)end=mid-1;
            else if(nums[mid]==target)
            {
                it=mid;
                break;
            }
            else begin=mid+1;
        }
        if(it==-1)return 0;
        int left=it;
        int right=it;
        while(left>=0&&nums[left]==target)left--;
        while(right<nums.size()&&nums[right]==target)right++;
        return right-left-1;
    }
}; */

/* 二分查找，确定中间在两头判断 */