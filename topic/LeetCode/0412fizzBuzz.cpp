/* дһ����������� 1 �� n ���ֵ��ַ�����ʾ��

1. ���?n?��3�ı����������Fizz����

2. ���?n?��5�ı����������Buzz����

3.���?n?ͬʱ��3��5�ı�������� ��FizzBuzz����

ʾ����

n = 15,

����:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/fizz-buzz
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;

        for(int i=1;i<=n;i++)
        {
            if(i%15==0) res.push_back("FizzBuzz");
            else if(i%3==0) res.push_back("Fizz");
            else if(i%5==0) res.push_back("Buzz");
            else res.push_back(to_string(i));
            
        }
        return res;
    }
}; */

/* �򵥵��ж� */