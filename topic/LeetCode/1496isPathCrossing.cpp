/* 给你一个字符串 path，其中 path[i] 的值可以是 'N'、'S'、'E' 或者 'W'，分别表示向北、向南、向东、向西移动一个单位。

机器人从二维平面上的原点 (0, 0) 处开始出发，按 path 所指示的路径行走。

如果路径在任何位置上出现相交的情况，也就是走到之前已经走过的位置，请返回 True ；否则，返回 False 。

 

示例 1：



输入：path = "NES"
输出：false 
解释：该路径没有在任何位置相交。
示例 2：



输入：path = "NESWW"
输出：true
解释：该路径经过原点两次。
 

提示：

1 <= path.length <= 10^4
path 仅由 {'N', 'S', 'E', 'W} 中的字符组成

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/path-crossing
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,int> mp;
        int x=0,y=0;
        mp[{x,y}]++;
        for(auto c:path)
        {
            if(c=='N') y++;
           

            if(c=='S') y--;
          

            if(c=='E') x++;
          

            if(c=='W') x--;
            
            if (mp.count({x,y}) > 0) return true;
            mp[{x,y}]++;
        }
        return false;


    }
}; */

/* 注意哈希表中count的用法，存在返回1，不存在返回0，与find的用法是不一样的 */