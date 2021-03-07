/* 在一个整数数组中，“峰”是大于或等于相邻整数的元素，相应地，“谷”是小于或等于相邻整数的元素。例如，在数组{5, 8, 4, 2, 3, 4, 6}中，{8, 6}是峰， {5, 2}是谷。现在给定一个整数数组，将该数组按峰与谷的交替顺序排序。

示例:

输入: [5, 3, 1, 2, 3]
输出: [5, 1, 3, 2, 3]
提示：

nums.length <= 10000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/peaks-and-valleys-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        size_t idx = 0, len = nums.size();
        if (len < 3) return;
        size_t low = 0, high = len - 1;
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
        while (low < high) {
            nums[idx++] = sorted[high--];
            nums[idx++] = sorted[low++];
        }
        if (len % 2 > 0) nums[idx] = sorted[low];
    }
}; */