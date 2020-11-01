/* 给你一个 m * n 的整数矩阵 mat ，请你将同一条对角线上的元素（从左上到右下）按升序排序后，返回排好序的矩阵。

 

示例 1：



输入：mat = [[3,3,1,1],[2,2,1,2],[1,1,1,2]]
输出：[[1,1,1,1],[1,2,2,2],[1,2,3,3]]
 

提示：

m == mat.length
n == mat[i].length
1 <= m, n <= 100
1 <= mat[i][j] <= 100

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-the-matrix-diagonally
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row=mat.size(),col=mat[0].size();

        unordered_map<int,vector<int>>mp;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                mp[i-j].emplace_back(mat[i][j]);
            }
        }
            for(auto &v:mp) sort(v.second.rbegin(),v.second.rend());

            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    mat[i][j]=mp[i-j].back();
                    mp[i-j].pop_back();
                }
            }
        
            return mat;
    }
}; */

/* 这道题真的是STL用的牛皮，解题方法也算是暴力法吧，取出来排序后再装回去 */