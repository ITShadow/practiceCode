/* ������ջʵ��һ�����С����е��������£���ʵ�������������� appendTail �� deleteHead ���ֱ�����ڶ���β�������������ڶ���ͷ��ɾ�������Ĺ��ܡ�(��������û��Ԫ�أ�deleteHead?�������� -1 )

?

ʾ�� 1��

���룺
["CQueue","appendTail","deleteHead","deleteHead"]
[[],[3],[],[]]
�����[null,null,3,-1]
ʾ�� 2��

���룺
["CQueue","deleteHead","appendTail","appendTail","deleteHead","deleteHead"]
[[],[],[5],[2],[],[]]
�����[null,-1,null,null,5,2]
��ʾ��

1 <= values <= 10000
�����?appendTail��deleteHead ����?10000?�ε���

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class CQueue {
public:
stack<int>s1,s2;
    CQueue() {

    }
    
    void appendTail(int value) {
        s1.push(value);
    }
    
    int deleteHead() {
        if(s1.empty()) return -1;

        while(!s1.empty())
        {
            int temp=s1.top();
            s2.push(temp);
            s1.pop();
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
}; */

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */

/* ջʵ�֣��ǵ����� */