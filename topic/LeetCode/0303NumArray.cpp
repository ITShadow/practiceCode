/* 给定一个整数数组  nums，求出数组从索引 i 到 j  (i ≤ j) 范围内元素的总和，包含 i,  j 两点。

示例：

给定 nums = [-2, 0, 3, -5, 2, -1]，求和函数为 sumRange()

sumRange(0, 2) -> 1
sumRange(2, 5) -> -1
sumRange(0, 5) -> -3
说明:

你可以假设数组不可变。
会多次调用 sumRange 方法。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/range-sum-query-immutable
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class NumArray {
public:
        vector<int>data;
    NumArray(vector<int>& nums) {
        data=nums;
        
    }
    
    int sumRange(int i, int j) {
        int res=0;
        for(int k=i;k<=j;k++)
        {
            res=res+data[k];
        }
        return res;
    }
}; */
/* 暴力法直接循环 */
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */

/* class NumArray {
public:
    vector<int>num;
    NumArray(vector<int>& nums) {
        num.push_back(0);
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            num.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        return num[j+1]-num[i];
    }
}; */
/* 动态规划 ？前缀和？*/

/* class NumArray {
public:
    
    NumArray(vector<int>& nums) {
        
        num=new int[nums.size() + 1];
        for(int i=0;i<nums.size();i++)
        {
            num[i+1]=num[i]+nums[i];
        }
    }
    
    int sumRange(int i, int j) {
        return num[j+1]-num[i];
    }
    private:
    int *num;
}; */

/* 前缀和，感觉和前面的动态规划差不多的感觉 */
