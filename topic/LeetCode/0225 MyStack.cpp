/* ʹ�ö���ʵ��ջ�����в�����

push(x) -- Ԫ�� x ��ջ
pop() -- �Ƴ�ջ��Ԫ��
top() -- ��ȡջ��Ԫ��
empty() -- ����ջ�Ƿ�Ϊ��
ע��:

��ֻ��ʹ�ö��еĻ�������-- Ҳ����?push to back, peek/pop from front, size, ��?is empty?��Щ�����ǺϷ��ġ�
����ʹ�õ�����Ҳ��֧�ֶ��С�?�����ʹ�� list ���� deque��˫�˶��У���ģ��һ������?, ֻҪ�Ǳ�׼�Ķ��в������ɡ�
����Լ������в���������Ч�ģ�����, ��һ���յ�ջ������� pop ���� top ��������

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/implement-stack-using-queues
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */
/* 
class MyStack {
public:
    queue<int> q1,q2;

    MyStack() {

    }
    
   
    void push(int x) {
        q1.push(x);
    }
    
   
    int pop() {
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int temp=q1.front();
        q1.pop();
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        return temp;

    }
    
    
    int top() {
        while(q1.size()>1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int temp=q1.front();
        q2.push(q1.front());
        q1.pop();
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        return temp;
    }
    
   
    bool empty() {
          if(!q1.empty())
            return false;
        else
            return true;

    }
}; */

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
/* �ö���ʵ��ջ���ǵ�ջ��1�Ƚ�����Լ����еĺ���ȳ� */