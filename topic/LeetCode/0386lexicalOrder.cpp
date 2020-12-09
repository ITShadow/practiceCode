/* 给定一个整数 n, 返回从 1 到 n 的字典顺序。

例如，

给定 n =1 3，返回 [1,10,11,12,13,2,3,4,5,6,7,8,9] 。

请尽可能的优化算法的时间复杂度和空间复杂度。 输入的数据 n 小于等于 5,000,000。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/lexicographical-numbers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    static bool compare(int left,int right)
    {
        string strleft=to_string(left);
        string strright=to_string(right);
        int pos=0;

        while(pos<strleft.size()||pos<strright.size())
        {
            if(pos<strleft.size()&&pos<strright.size())
            {
                if(strleft[pos]<strright[pos]) return true;
                else if(strleft[pos]>strright[pos]) return false;
            }

            else if( strleft.size()<strright.size()) return true;
            else return false;

            pos++;
        }
        return true;
    }
    vector<int> lexicalOrder(int n) {
        vector<int>nums(n,0);

        for(int i=0;i<n;i++)
        {
            nums[i]=i+1;
        }

        sort(nums.begin(),nums.end(),compare);
        return nums;
    }
}; */