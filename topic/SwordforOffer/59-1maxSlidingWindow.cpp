/* 给定一个数组 nums 和滑动窗口的大小 k，请找出所有滑动窗口里的最大值。

示例:

输入: nums = [1,3,-1,-3,5,3,6,7], 和 k = 3
输出: [3,3,5,5,6,7] 
解释: 

  滑动窗口的位置                最大值
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7
 

提示：

你可以假设 k 总是有效的，在输入数组不为空的情况下，1 ≤ k ≤ 输入数组的大小。

注意：本题与主站 239 题相同：https://leetcode-cn.com/problems/sliding-window-maximum/

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/hua-dong-chuang-kou-de-zui-da-zhi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
class Moqueue{
    public:
    deque<int>d;
    public:
    void push(int n)
    {
        while(!d.empty()&&d.back()<n)
        {
            d.pop_back();
        }
        d.push_back(n);
    }

    int max(){ return d.front();}

    void pop(int n)
    {
        if(!d.empty()&&d.front()==n)
        d.pop_front();
    }
};
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        Moqueue window;
        vector<int>res;

        for(int i=0;i<nums.size();i++)
        {
            if(i<k-1) window.push(nums[i]);
            else
            {
                window.push(nums[i]);
                res.push_back(window.max());
                window.pop(nums[i-k+1]);
            }
        }
        return res;
    }
}; */