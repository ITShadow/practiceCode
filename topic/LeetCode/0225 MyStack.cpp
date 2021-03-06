/* 使用队列实现栈的下列操作：

push(x) -- 元素 x 入栈
pop() -- 移除栈顶元素
top() -- 获取栈顶元素
empty() -- 返回栈是否为空
注意:

你只能使用队列的基本操作-- 也就是?push to back, peek/pop from front, size, 和?is empty?这些操作是合法的。
你所使用的语言也许不支持队列。?你可以使用 list 或者 deque（双端队列）来模拟一个队列?, 只要是标准的队列操作即可。
你可以假设所有操作都是有效的（例如, 对一个空的栈不会调用 pop 或者 top 操作）。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/implement-stack-using-queues
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。 */
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
/* 用队列实现栈，记得栈的1先进后出以及队列的后进先出 */