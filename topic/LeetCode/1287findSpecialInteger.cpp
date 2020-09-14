/* 给你一个非递减的 有序 整数数组，已知这个数组中恰好有一个整数，它的出现次数超过数组元素总数的 25%。

请你找到并返回这个整数

 

示例：

输入：arr = [1,2,2,6,6,6,6,7,10]
输出：6
 

提示：

1 <= arr.length <= 10^4
0 <= arr[i] <= 10^5

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/element-appearing-more-than-25-in-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(auto c:arr) mp[c]++;

        for(auto c:mp)
        {
            if(c.second>(arr.size()/4)) return c.first;
        }
        return -1;
    }
}; */

/* 哈希表的简单应用 */