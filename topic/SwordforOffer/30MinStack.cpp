/* ����ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ����СԪ�ص� min �����ڸ�ջ�У����� min��push �� pop ��ʱ�临�Ӷȶ��� O(1)��

?

ʾ��:

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.min();   --> ���� -3.
minStack.pop();
minStack.top();      --> ���� 0.
minStack.min();   --> ���� -2.
?

��ʾ��

�������ĵ����ܴ��������� 20000 ��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/bao-han-minhan-shu-de-zhan-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */


/* class MinStack {
public:
stack<int>s,s2;
    
     MinStack() {

    }
    
    void push(int x) {
        s.push(x);
        if(s2.empty() || x <= s2.top()) s2.push(x);
        else s2.push(s2.top());
    }
    
    void pop() {
        
        s.pop();
        s2.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int min() {
        return s2.top();
    }
}; */

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
/* һ������������һ��ѹ����С */