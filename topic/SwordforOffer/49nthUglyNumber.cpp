/* 我们把只包含质因子 2、3 和 5 的数称作丑数（Ugly Number）。求按从小到大的顺序的第 n 个丑数。

 

示例:

输入: n = 10
输出: 12
解释: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 是前 10 个丑数。
说明:  

1 是丑数。
n 不超过1690。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/chou-shu-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<0) return 0;

        vector<long long int>res(n+1,1);

        int p2=0,p3=0,p5=0;

        for(int i=1;i<n;i++)
        {
            res[i]=min(min(2*res[p2],3*res[p3]),5*res[p5]);

            if(res[i]==2*res[p2]) p2++;
            if(res[i]==3*res[p3]) p3++;
            if(res[i]==5*res[p5]) p5++;
        }
        return res[n-1];
    }
}; */