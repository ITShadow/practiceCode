/* 给定一个字符串来代表一个学生的出勤记录，这个记录仅包含以下三个字符：

'A' : Absent，缺勤
'L' : Late，迟到
'P' : Present，到场
如果一个学生的出勤记录中不超过一个'A'(缺勤)并且不超过两个连续的'L'(迟到),那么这个学生会被奖赏。

你需要根据这个学生的出勤记录判断他是否会被奖赏。

示例 1:

输入: "PPALLP"
输出: True
示例 2:

输入: "PPALLL"
输出: False

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/student-attendance-record-i
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */

/* class Solution {
public:
    bool checkRecord(string s) {
        int A_num=0;
        int L_num=0;
        for(auto c :s)
        {
            if(c=='A')
            {
                A_num++;
                L_num=0;
            }
            else if(c=='L') L_num++;
            else L_num=0;
        if(L_num>2||A_num>1) return false;
        }
        return true;
    }
}; */

/* 遇到连续的L才增加，注意判断条件的位置 */

/* class Solution {
public:
    bool checkRecord(string s) {
        int A_num=0;
        int L_num=0;
        for(auto c :s)
        {
            if(c=='A') A_num++;
            if(c=='L') L_num++;
        }

        if(A_num>1) return false;
        else
        {
            if(L_num<3) return true;
            else
            {
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')
                    return false;
                }
            }
        }
      return true;     
    }       
}; */

/* 蠢一点的办法 */