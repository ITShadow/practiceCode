/* ����һ��Ŀ������ target ��һ������ n��ÿ�ε�������Ҫ��? list = {1,2,3..., n} �������ȡһ�����֡�

��ʹ����������������Ŀ������ target ��

Push���� list �ж�ȡһ����Ԫ�أ� ���������������С�
Pop��ɾ�������е����һ��Ԫ�ء�
���Ŀ�����鹹����ɣ���ֹͣ��ȡ����Ԫ�ء�
��Ŀ���ݱ�֤Ŀ�������ϸ����������ֻ���� 1 �� n ֮������֡�

�뷵�ع���Ŀ���������õĲ������С�

��Ŀ���ݱ�֤����Ψһ�ġ�

?

ʾ�� 1��

���룺target = [1,3], n = 3
�����["Push","Push","Pop","Push"]
���ͣ� 
��ȡ 1 ���Զ��������� -> [1]
��ȡ 2 ���Զ��������飬Ȼ��ɾ���� -> [1]
��ȡ 3 ���Զ��������� -> [1,3]
ʾ�� 2��

���룺target = [1,2,3], n = 3
�����["Push","Push","Push"]
ʾ�� 3��

���룺target = [1,2], n = 4
�����["Push","Push"]
���ͣ�ֻ��Ҫ��ȡǰ 2 �����־Ϳ���ֹͣ��
ʾ�� 4��

���룺target = [2,3,4], n = 4
�����["Push","Pop","Push","Push","Push"]
?

��ʾ��

1 <= target.length <= 100
1 <= target[i]?<= 100
1 <= n <= 100
target ���ϸ������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/build-an-array-with-stack-operations
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       stack<int> s;
		for (int i = n; i >= 1; i--) {
			s.push(i);
		}
		vector<string> res;
		for (int i = 0; i < target.size();i++) {
			int x = target[i];
			while (s.top()!=x) {
				res.push_back("Push");
				s.pop();
				res.push_back("Pop");
			}
			if (s.top() == x) {
				res.push_back("Push");
				s.pop();
			}
		}
		return res;

    }
}; */
/* �����е�����ѹ��ջ������Ŀ��ֵ����Ϊpush������pop push */