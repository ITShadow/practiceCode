/* 输入一个正整数 target ，输出所有和为 target 的连续正整数序列（至少含有两个数）。

序列内的数字由小到大排列，不同序列按照首个数字从小到大排列。

 

示例 1：

输入：target = 9
输出：[[2,3,4],[4,5]]
示例 2：

输入：target = 15
输出：[[1,2,3,4,5],[4,5,6],[7,8]]
 

限制：

1 <= target <= 10^5

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/he-wei-sde-lian-xu-zheng-shu-xu-lie-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>>vec;
        vector<int>res;
        
        for(int l=1,r=2;l<r;)
        {
            int sum=(l+r)*(r-l+1)/2;

            if(sum==target)
            {
                res.clear();

                for(int i=l;i<=r;i++)
                {
                    res.emplace_back(i);
                }
                vec.push_back(res);
                l++;
            }
            else if(sum>target) l++;
            else r++;
        }
        return vec;
    }
}; */