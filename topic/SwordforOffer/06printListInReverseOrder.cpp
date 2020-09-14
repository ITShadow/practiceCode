// 面试题6：从尾到头打印链表
// 题目：输入一个链表的头结点，从尾到头反过来打印出每个结点的值。


#include<iostream>
#include<stack>
using namespace std;
class ListNode
{
    public:
    int data;
    ListNode *next;

};

void PrintListRevering_Iteratively(ListNode *pHead)
{
    stack<ListNode*>nodes;
    ListNode *pNode=pHead;
    while(pNode!=NULL)
    {
        nodes.push(pNode);
        pNode=pNode->next;
    }

    while(!nodes.empty())
    {
        pNode=nodes.top();
        cout<<pNode->data<<endl;
        nodes.pop();
    }
}//利用栈进行操作

void PrintListReversingly_Recursively(ListNode* pHead)
{
    if(pHead != nullptr)
    {
        if (pHead->next != nullptr)
        {
            PrintListReversingly_Recursively(pHead->next);
        }
 
        cout<<pHead->data<<endl;
    }
}