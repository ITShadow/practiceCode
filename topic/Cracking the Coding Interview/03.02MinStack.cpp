/* �����һ��ջ�����˳���ջ֧�ֵ�pop��push�������⣬��֧��min�������ú�������ջԪ���е���Сֵ��ִ��push��pop��min������ʱ�临�Ӷȱ���ΪO(1)��


ʾ����

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> ���� -3.
minStack.pop();
minStack.top();      --> ���� 0.
minStack.getMin();   --> ���� -2.

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/min-stack-lcci
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
}; */

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

/* ��������ջ��һ������������һ��ֻ����С�ģ���ô���˾�����С�� */