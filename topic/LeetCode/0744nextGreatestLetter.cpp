/* ����һ���������ַ��б� letters ���б���ֻ����СдӢ����ĸ�������һ��Ŀ����ĸ?target������Ѱ������һ�����б����Ŀ����ĸ�����С��ĸ��

�ڱȽ�ʱ����ĸ������ѭ�����ֵġ��ٸ����ӣ�

���Ŀ����ĸ target = 'z' �����ַ��б�Ϊ?letters = ['a', 'b']����𰸷���?'a'
?

ʾ����

����:
letters = ["c", "f", "j"]
target = "a"
���: "c"

����:
letters = ["c", "f", "j"]
target = "c"
���: "f"

����:
letters = ["c", "f", "j"]
target = "d"
���: "f"

����:
letters = ["c", "f", "j"]
target = "g"
���: "j"

����:
letters = ["c", "f", "j"]
target = "j"
���: "c"

����:
letters = ["c", "f", "j"]
target = "k"
���: "c"
?

��ʾ��

letters���ȷ�Χ��[2, 10000]�����ڡ�
letters ����Сд��ĸ��ɣ����ٰ���������ͬ����ĸ��
Ŀ����ĸtarget ��һ��Сд��ĸ��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/find-smallest-letter-greater-than-target
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0,r=letters.size()-1;
        if(target<letters[l]||target>=letters[r]) return letters[l];
        while(l+1<r)
        {
            int mid=l+(r-l)/2;
            if(letters[mid]>target) r=mid;
            else l=mid;
        }
        return letters[r];
        
    }
}; */

/* ���ֲ��ң�ע��߽����� */