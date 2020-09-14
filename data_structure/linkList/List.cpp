#include"List.h"

/* 构造函数，m_pList为头结点，将头结点数据置为零，指针指向空*/
List::List()
{
    m_pList=new Node;
    m_pList->data=0;
    m_pList->next=NULL;
    m_iLength=0;
}


/*析构函数，调用清空链表函数后删除头结点，并将指针指向空*/
List::~List()
{
    ClearList();
    delete m_pList;
    m_pList=NULL; 
}


/* 清空链表，或者说是销毁链表，
利用循环删除节点，头结点指向空。
注意利用一个中间指针保存下一个点，不然会丢失。*/
void List::ClearList()
{
    Node *currentNode=m_pList->next;
    while (currentNode!=NULL)
    {
        Node *temp=currentNode->next;
        delete currentNode;
        currentNode=temp;
    }
    m_pList->next=NULL;
}

bool List::ListEmpty()
{
    m_iLength==0 ? true:false;
}

int List::ListLength()
{
    return m_iLength;
}

bool List::ListInsertHead(Node *pNode)
{
    Node *temp=m_pList->next;
    Node *newNode= new Node;
    if(newNode==NULL)
    {
        return false;
    }
    else
    {
        newNode->data=pNode->data;
        m_pList->next=newNode;
        newNode->next=temp;
        m_iLength++;
        return true;
    }
}

bool List::ListInsertTail(Node *pNode)
{
    Node *currentNode=m_pList;
    while(currentNode->next!=NULL)
    {
        currentNode->next=currentNode;
    }
    Node *newNode=new Node;
    if(newNode==NULL)
    {
        return false;
    }
    else
    {
        newNode->data=pNode->data;
        newNode->next=NULL;
        currentNode->next=newNode;
        m_iLength++;
        return true;
        
    }
    
}

bool List::ListInsert(int i,Node *pNode)
{
    if(i<0||i>m_iLength)
    {
        return false;
    }
    Node *currentNode=m_pList;
    for(int k=0;k<i;k++)
    {
        currentNode=currentNode->next;
    }
    Node *newNode =new Node;
    if(newNode==NULL)
    {
        return false;

    }
    else
    {
        newNode->data=pNode->data;
        newNode->next=currentNode->next;
        currentNode->next=newNode;
        return true;
    }
    
}

bool List::ListDelete(int i,Node *pNode)
{
    if(i<0||i>=m_iLength)
    {
        return false;
    }
    Node *currentNode=m_pList;
    Node *currentNodeBefore=NULL;
    for(int k=0;k<i;k++)
    {
        currentNodeBefore=currentNode;
        currentNode=currentNode->next;
    }
    currentNodeBefore->next=currentNode->next;
    pNode->data=currentNode->data;
    delete currentNode;
    currentNode=NULL;
    m_iLength--;
    return true;

}


bool List::GetElem(int i, Node *pNode)
{
    if (i<0 || i >= m_iLength)
    {
        return false;
    }
    Node *currentNode = m_pList;
    Node *currentNodeBefore = NULL;
    for (int k = 0; k <= i; k++)
    {
        currentNodeBefore = currentNode;
        currentNode = currentNode->next;
    }
    pNode->data = currentNode->data;
    return true;
}

int List::LocateElem(Node *pNode)
{
    Node *currentNode=m_pList;
    int count=0;
    while(currentNode->next!=NULL)
    {
        currentNode=currentNode->next;
        int count=0;
        if(currentNode->data==pNode->data)
        {
            return count;
        }
        count ++;
    }
    return -1;
}

bool List::PriorElem(Node *pCurrentNode,Node *pPreNode)
{
    Node *currentNode=m_pList;
    Node *temNode=NULL;
    int count=0;
    while(currentNode->next!=NULL)
    {
        temNode=currentNode;
        currentNode=currentNode->next;
        if(currentNode->data==pCurrentNode->data)
        {
            if(temNode==m_pList)
            {
                return false;
            }
            pPreNode->data=temNode->data;
            return true;
        }

    }
    return false;
}


bool List::NextElem(Node *pCurrentNode, Node *pNextNode)
{
    Node *currentNode = m_pList;
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->next;
        if (currentNode->data == pCurrentNode->data)
        {
            if (currentNode->next == NULL)
            {
                return false;
            }
            pNextNode->data = currentNode->next->data;
            return true;
        }
    }
}

 void List::ListTraverse()
 {
    Node *currentNode=m_pList;
    while(currentNode->next!=NULL)
    {
        currentNode=currentNode->next;
        currentNode->printNode();

    }
 }

 bool List::ListChangeData(int pos,int newData)
 {
    if(pos<0||pos>m_iLength)
    {
        return false;
    }
    Node *currentNode=m_pList;
    for(int i=0;i<pos;i++)
    {
        currentNode=currentNode->next;
    }
    currentNode->data=newData;
    return true;
 }