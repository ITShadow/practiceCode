/* ʵ��һ���㷨��ɾ�����������м��ĳ���ڵ㣨�����ǵ�һ�������һ���ڵ㣩���ٶ���ֻ�ܷ��ʸýڵ㡣

?

ʾ����

���룺��������a->b->c->d->e->f�еĽڵ�c
������������κ����ݣ����������Ϊa->b->d->e->f

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/delete-middle-node-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */
#include<iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class solution
{
    void deleteNode(ListNode *Node)
    {
        Node->val=Node->next->val;

        ListNode *temp=Node->next;
        Node->next=Node->next->next;
        delete temp;

    }
};
/* ����һ���������Լ���ɾ�� */