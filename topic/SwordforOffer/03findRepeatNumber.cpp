/* ???????????


?????? n ??? nums ???????? 0?n-1 ????????????????????????????????????????????????????????????

?? 1?

???
[2, 3, 1, 0, 2, 5, 3]
???2 ? 3 

??????LeetCode?
???https://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof
?????????????????????????????????? */
/* class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto c:nums)  mp[c]++;

        
        for(auto iter=mp.begin();iter!=mp.end();iter++)
        {
            
            if(iter->second>1) 
            return iter->first;
        }
        return -1;;
       
    }
}; */