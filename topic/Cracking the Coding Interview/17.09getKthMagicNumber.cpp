/* 有些数的素因子只有 3，5，7，请设计一个算法找出第 k 个数。注意，不是必须有这些素因子，而是必须不包含其他的素因子。例如，前几个数按顺序应该是 1，3，5，7，9，15，21。

示例 1:

输入: k = 5

输出: 9

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/get-kth-magic-number-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    int getKthMagicNumber(int k) {

        if (k <= 0) return 0;
        
        vector<long long int> nums(k+1, 1); 
        int p3 = 0, p5 = 0, p7 = 0; 
        for (int i = 1; i < k; ++i)
        {
            nums[i] = min(min(3 * nums[p3], 5 * nums[p5]), 7 * nums[p7]);
            if (nums[i] == 3 * nums[p3]) p3++; 
            if (nums[i] == 5 * nums[p5]) p5++;   
            if (nums[i] == 7 * nums[p7]) p7++;
        }
        return nums[k-1];
    }
}; */