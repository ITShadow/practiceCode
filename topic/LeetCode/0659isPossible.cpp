/* 给你一个按升序排序的整数数组 num（可能包含重复数字），请你将它们分割成一个或多个长度至少为 3 的子序列，其中每个子序列都由连续整数组成。

如果可以完成上述分割，则返回 true ；否则，返回 false 。

 

示例 1：

输入: [1,2,3,3,4,5]
输出: True
解释:
你可以分割出这样两个连续子序列 : 
1, 2, 3
3, 4, 5
示例 2：

输入: [1,2,3,3,4,4,5,5]
输出: True
解释:
你可以分割出这样两个连续子序列 : 
1, 2, 3, 4, 5
3, 4, 5
示例 3：

输入: [1,2,3,4,4,5]
输出: False
 

提示：

1 <= nums.length <= 10000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/split-array-into-consecutive-subsequences
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>freq,need;

        for(auto v:nums)
        {
            freq[v]++;
        }

        for(auto v:nums)
        {
            if(freq[v]==0) continue;

            if(need.count(v)&&need[v]>0)
            {
                freq[v]--;
                need[v]--;

                need[v+1]++;
            }
            else if(freq[v]>0&&freq[v+1]>0&&freq[v+2]>0)
            {
                freq[v]--;
                freq[v+1]--;
                freq[v+2]--;
                
                need[v+3]++;
            }
            else return false;
        }
        return true;
    }
}; */