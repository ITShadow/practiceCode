/* ʹ��ջʵ�ֶ��е����в�����

push(x) -- ��һ��Ԫ�ط�����е�β����
pop() -- �Ӷ����ײ��Ƴ�Ԫ�ء�
peek() -- ���ض����ײ���Ԫ�ء�
empty() -- ���ض����Ƿ�Ϊ�ա�
?

ʾ��:

MyQueue queue = new MyQueue();

queue.push(1);
queue.push(2);  
queue.peek();  // ���� 1
queue.pop();   // ���� 1
queue.empty(); // ���� false
?

˵��:

��ֻ��ʹ�ñ�׼��ջ���� -- Ҳ����ֻ��?push to top,?peek/pop from top,?size, ��?is empty?�����ǺϷ��ġ�
����ʹ�õ�����Ҳ��֧��ջ�������ʹ�� list ���� deque��˫�˶��У���ģ��һ��ջ��ֻҪ�Ǳ�׼��ջ�������ɡ�
�������в���������Ч�� �����磬һ���յĶ��в������ pop ���� peek ��������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/implement-queue-using-stacks
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class MyQueue {
public:
    stack<int> s1,s2;
    
    MyQueue() {

    }
    
   
    void push(int x) {
        s1.push(x);
    }
    
  
    int pop() {
        while(!s1.empty())
        {
            int temp=s1.top();
            s1.pop();
            s2.push(temp);
        }
        int ret=s2.top();
        s2.pop();
        while(!s2.empty())
        {
            int temp=s2.top();
            s2.pop();
            s1.push(temp);
        }
        return ret;
    }
    
  
    int peek() {

        while(!s1.empty())
        {
            int temp=s1.top();
            s1.pop();
            s2.push(temp);
        }
        int ret=s2.top();
        while(!s2.empty())
        {
            int temp=s2.top();
            s2.pop();
            s1.push(temp);
        }
        return ret;
    }
    
    
    bool empty() {
        return s1.empty()&&s2.empty();
    }
}; */

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

/* ջʵ�ֶ��У�����ջ���Ƚ�����Լ����е��Ƚ��ȳ� */