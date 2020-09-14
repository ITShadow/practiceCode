#pragma once
#include"Node.h"
#ifndef LIST_H
#define LIST_H
#include<iostream>
using namespace std;
class List
{
public:
    List();//构造函数
    ~List();//析构函数
    void ClearList();//清空链表
    bool ListEmpty();//链表判空
    int ListLength();//链表长度
    bool GetElem(int i,Node *pNode);//获得指定索引的元素
    int LocateElem(Node *pNode);//获得指定元素的索引
    bool PriorElem(Node *pCurrentNode,Node*pPreNode);//获得前驱结点
    bool NextElem(Node *pCurrentNode,Node *pPreNode);//获得后继结点
    void ListTraverse();//遍历
    bool ListInsert(int i,Node *pNode);//插入元素
    bool ListDelete(int i,Node *pNode);//删除元素
    bool ListInsertHead(Node *pNode);//头插法
    bool ListInsertTail(Node *pNode);//尾插法
    bool ListChangeData(int pos,int newData);
    private:
    Node *m_pList;//头结点
    int m_iLength;//链表长度




};



#endif