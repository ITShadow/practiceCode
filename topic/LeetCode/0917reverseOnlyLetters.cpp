/* 给定一个字符串 S，返回 “反转后的” 字符串，其中不是字母的字符都保留在原地，而所有字母的位置发生反转。

 

示例 1：

输入："ab-cd"
输出："dc-ba"
示例 2：

输入："a-bC-dEf-ghIj"
输出："j-Ih-gfE-dCba"
示例 3：

输入："Test1ng-Leet=code-Q!"
输出："Qedo1ct-eeLg=ntse-T!"
 

提示：

S.length <= 100
33 <= S[i].ASCIIcode <= 122 
S 中不包含 \ or "

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-only-letters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/* class Solution {
public:
    string reverseOnlyLetters(string S) {
        string chs;
        for(auto x:S)
        {
            if(isalpha(x)) chs = chs+x;
        }
        int i=chs.length();
        for(int j=0;j<S.size();++j){
            if(isalpha(S[j])){
                S[j] = chs[--i];
            }
        }
        return S;

    }
}; *//* 扫描法 */

/* class Solution {
public:
    string reverseOnlyLetters(string S) {
        int begin = 0,end=S.length()-1;
        while(begin<end)
        {
            if(!isalpha(S[begin]))
                begin++;
            if(!isalpha(S[end])) 
                end--;
            if(isalpha(S[begin])&&isalpha(S[end]))
                swap(S[begin++],S[end--]);
        }
        return S; 
    }
}; */

/* 双指针 */