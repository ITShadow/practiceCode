/* ʵ��һ��MyQueue�࣬����������ջ��ʵ��һ�����С�


ʾ����

MyQueue queue = new MyQueue();

queue.push(1);
queue.push(2);
queue.peek();  // ���� 1
queue.pop();   // ���� 1
queue.empty(); // ���� false

˵����

��ֻ��ʹ�ñ�׼��ջ���� -- Ҳ����ֻ�� push to top, peek/pop from top, size �� is empty �����ǺϷ��ġ�
����ʹ�õ�����Ҳ��֧��ջ�������ʹ�� list ���� deque��˫�˶��У���ģ��һ��ջ��ֻҪ�Ǳ�׼��ջ�������ɡ�
�������в���������Ч�� �����磬һ���յĶ��в������ pop ���� peek ��������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/implement-queue-using-stacks-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */


/* class MyQueue {
public:
    stack<int>s1,s2;
     Initialize your data structure here. 
    MyQueue() {

    }
    
    
    void push(int x) {
        s1.push(x);
    }
    
    
    int pop() {
        int val=peek();
        s2.pop();
        return val;
    }
    
   
    int peek() {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                int val=s1.top();
                s1.pop();
                s2.push(val);
            }
        }
        return s2.top();
       
    }
    
  
    bool empty() {
        return s1.empty()&&s2.empty();
    }
};  */

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */ 

/* ������ջʵ�ֶ��У���סջ���Ƚ�����Լ����е��Ƚ���� */