/* ���һ��֧�� push ��pop ��top �����������ڳ���ʱ���ڼ�������СԪ�ص�ջ��

push(x) ���� ��Ԫ�� x ����ջ�С�
pop()?���� ɾ��ջ����Ԫ�ء�
top()?���� ��ȡջ��Ԫ�ء�
getMin() ���� ����ջ�е���СԪ�ء�
?

ʾ��:

���룺
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

�����
[null,null,null,null,-3,null,0,-2]

���ͣ�
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> ���� -3.
minStack.pop();
minStack.top();      --> ���� 0.
minStack.getMin();   --> ���� -2.
?

��ʾ��

pop��top �� getMin ���������� �ǿ�ջ �ϵ��á�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/min-stack
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class MinStack {
public:
    stack<int> s1,s2;
   
    MinStack() {
        
    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty()) s2.push(x);
        else s2.push(min(s2.top(),x));
    }
    void pop() {
       s1.pop();
       s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};
 */
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
/* һ��ջ����������һ��ջֻѹ����С���� */