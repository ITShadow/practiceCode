/* 给你两个数组，arr1 和 arr2，

arr2 中的元素各不相同
arr2 中的每个元素都出现在 arr1 中
对 arr1 中的元素进行排序，使 arr1 中项的相对顺序和 arr2 中的相对顺序相同。未在 arr2 中出现过的元素需要按照升序放在 arr1 的末尾。

 

示例：

输入：arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
输出：[2,2,2,1,4,3,3,9,6,7,19]
 

提示：

arr1.length, arr2.length <= 1000
0 <= arr1[i], arr2[i] <= 1000
arr2 中的元素 arr2[i] 各不相同
arr2 中的每个元素 arr2[i] 都出现在 arr1 中

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/relative-sort-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        vector<int>res;

        for(auto c:arr1) mp[c]++;

        for(auto n:arr2)
        {
            while(mp[n]--) res.push_back(n);

            mp.erase(n);
        }

        for(auto iter=mp.begin();iter!=mp.end();iter++)
        {
            while(iter->second--) res.push_back(iter->first);
        }

        return res;
    }
}; */


/* 先用排序哈希表记录数字以及出现的次数，对应的第二个数组的哈希表第一项，压入数组，同时将次数--至为0时，删除该数字，未在数组2出现的数字可能有多个次数，所以注意减为零 */