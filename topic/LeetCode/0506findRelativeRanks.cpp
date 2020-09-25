/* 给出 N 名运动员的成绩，找出他们的相对名次并授予前三名对应的奖牌。前三名运动员将会被分别授予 “金牌”，“银牌” 和“ 铜牌”（"Gold Medal", "Silver Medal", "Bronze Medal"）。

(注：分数越高的选手，排名越靠前。)

示例 1:

输入: [5, 4, 3, 2, 1]
输出: ["Gold Medal", "Silver Medal", "Bronze Medal", "4", "5"]
解释: 前三名运动员的成绩为前三高的，因此将会分别被授予 “金牌”，“银牌”和“铜牌” ("Gold Medal", "Silver Medal" and "Bronze Medal").
余下的两名运动员，我们只需要通过他们的成绩计算将其相对名次即可。
提示:

N 是一个正整数并且不会超过 10000。
所有运动员的成绩都不相同。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/relative-ranks
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
     string to_str(int n)
    {
        if(n==1) return "Gold Medal";
        if(n==2) return "Silver Medal";
        if(n==3) return "Bronze Medal";

        return to_string(n);
    }
    vector<string> findRelativeRanks(vector<int>& nums) {
       int n=nums.size();
       vector<string> res(n);
       map<int,int> mp;

       for(int i=0;i<nums.size();i++) mp[nums[i]]=i;

       for(auto it:mp)
       res[it.second]=to_str(n--);
       return res;

    }
}; */

/* 不要想得太复杂 */