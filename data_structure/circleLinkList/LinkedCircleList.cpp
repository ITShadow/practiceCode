#include"LinkedCircleList.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

template <class T>
CircList<T>::CircList()
{
    first=new CircLinkNode<T>;                  //创建头结点
    last=first;
    last->link=first;
};

template <class T>
CircList<T>::CircList(const T &x)
{
    first=new CircLinkNode<T>(x);               //头节点中是链表的长度
    last=first;
    first->link=NULL;
    last->link=first;
};

//复制构造函数中，指针方面还是有问题，不过不知道如何调试
template <class T>
CircList<T>::CircList(CircList<T>& L)
{
    T value;
    CircLinkNode<T> *srcptr=L.first;            //获取附加头节点
    value=srcptr->data;                         //取得附加头节点的值
    CircLinkNode<T> *desptr=first=new CircLinkNode<T>(value);                 //构造函数的指针
    if (srcptr->link==L.first)               //如果被复制的链表为空链表的情况下
    {
        last=desptr;
        last->link=first;
    }
    else
    {
        //desptr=desptr->link;
        srcptr=srcptr->link;
        while(srcptr->link!=L.first)                            //找到尾指针，尾指针指向first;
        {
            value=srcptr->data;
            desptr->link=new CircLinkNode<T>(value);
            desptr=desptr->link;
            srcptr=srcptr->link;
        }
        value=srcptr->data;
        desptr->link=new CircLinkNode<T>(value);
        last=desptr->link;
        last->link=first;
    }
};

template <class T>
void CircList<T>::makeEmpty()
{
    CircLinkNode<T> *q;
    CircLinkNode<T> *p=first;             //仅仅作为一种标记
    while(p->link!=first)
    {
        p=first;
        q=first->link;
        first->link=q->link;
        delete q;              //仅仅保留表头节点
    }
};

template <class T>
int CircList<T>::Length()const                  //不能改变的最好还是用const修饰符
{
    CircLinkNode<T> *p=first->link;            //从第一个节点开始算起,也就是说不算附加头结点啦
    int count=1;
    while(p->link!=first)
    {
        p=p->link;
        count++;
    }
    return count;
};


template <class T>
CircLinkNode<T> *CircList<T>::Locate(int i)
{
    if(i<0)
        cout<<"输入的位置不存在！"<<endl;
    CircLinkNode<T> *current=first->link;
    int k=1;
    while (current!=first&&k<i)
    {
        current=current->link;
        k++;
    }
    if (current==first&&k<i)
    {
        cout<<"您要查找的位置不存在"<<endl;
        current=NULL;
    }
    return current;
};

template <class T>
CircLinkNode<T> *CircList<T>::Search(T &x)
{
    CircLinkNode<T> *p=first->link;
    while(p!=first)
    {
        if(p->data==x)
            return p;
        else
        {
            p=p->link;
        }
    }
    if (p==first)
    {
        p=NULL;
        return p;               //没有找到就返回空指针
    }
};

template <class T>
bool CircList<T>::getData(int i,T& x)            //找到找不到，找到是否符合！
{
    if (i<0)
    {
        cout<<"The "<<i<<"is not illegal!"<<endl;
        return false;
    }
    CircLinkNode<T> *current=Locate(i);
    if (x==current->data)
    {
        return true;
    }
    else
        return false;
};

template <class T>
bool CircList<T>::setData(int i,T &x)              //修改数据
{
    if (i<0)
    {
        cout<<"i is illegal!";
        return false;
    }
    CircLinkNode<T> *current=Locate(i);
    current->data=x;
    return true;
};

template <class T>
bool CircList<T>::Insert(int i,T &x)
{
    CircLinkNode<T> *current=Locate(i-1);
    CircLinkNode<T> *newNode=new CircLinkNode<T>(x);            //新建节点
    newNode->link=current->link;
    current->link=newNode;
    return true;
};

template <class T>
bool CircList<T>::Remove(int i,T &x)                //删除节点！的确是删除了，但是总是感觉不知道是删除了哪个节点呢
{
    CircLinkNode<T> *current=Locate(i-1);
    if (current->link==first)               //不能删除尾节点，头节点是肯定删除不掉的
    {
        cout<<"i is not illegal!";
        return false;
    }
    CircLinkNode<T> *del=new CircLinkNode<T>;
    del=current->link;
    current->link=del->link;
    x=del->data;
    delete del;
    return true;
}

template <class T>
void CircList<T>::output()
{
    CircLinkNode<T> *current = first->link;                         //first->link找不到
    while(current!=first)                                           //这里内存泄露，也就是说，current指针是没有指向的内容的
    {
        cout<<current->data<<endl;
        current=current->link;
    }

};

/**
template <class T>
CircList<T>& CircList<T>::operator=(CircList<T> &L)
{
    T value;
    CircLinkNode<T> *srcptr=L.first;
    CircLinkNode<T> *destptr=first;                //很简单的一个错误，在这里为destprt分配了一个空间，但是在循环里面，再次为desptr分配了一个空间
    value=srcptr->data;
    destptr=new CircLinkNode<T>(value);
    first=destptr;
    destptr=destptr->link;
    srcptr=srcptr->link;                        //头结点出现重大错误！
    while(srcptr!=L.last)
    {
        value=srcptr->data;
        destptr=new CircLinkNode<T>(value);
        destptr=destptr->link;
        srcptr=srcptr->link;
    }
    value=srcptr->data;
    destptr=new CircLinkNode<T>(value);
    last=destptr;
    last->link=first;
    return *this;
    //当调用一个成员函数时，有一个指向请求这个调用的对象的指针作为一个参数将自动被传送给这个函数，这个指针叫做this.
};
**/

template <class T>
CircList<T>& CircList<T>::operator=(CircList<T> &L)
{
    T value;
    CircLinkNode<T> *srcptr=L.first;            //获取附加头节点
    value=srcptr->data;                         //取得附加头节点的值
    CircLinkNode<T> *desptr=first=new CircLinkNode<T>(value);                 //构造函数的指针
    if (srcptr->link==L.first)               //如果被复制的链表为空链表的情况下
    {
        last=desptr;
        last->link=first;
    }
    else
    {
        //desptr=desptr->link;
        srcptr=srcptr->link;
        while(srcptr->link!=L.first)                            //找到尾指针，尾指针指向first;
        {
            value=srcptr->data;
            desptr->link=new CircLinkNode<T>(value);
            desptr=desptr->link;
            srcptr=srcptr->link;
        }
        value=srcptr->data;
        desptr->link=new CircLinkNode<T>(value);
        last=desptr->link;
        last->link=first;
    }
    cout<<"头指针指向的内容："<<first<<endl;

    return *this;
};

//前插法，需要专门处理一次才能进入while循环中。。。。。。。
template <class T>
void CircList<T>::inputFront(T endTag)
{
    CircLinkNode<T> *newNode;T val;
    makeEmpty();                         //先置空

    cin>>val;
    if (val!=endTag)
    {
        newNode=new CircLinkNode<T>(val);
    }
    if (newNode==NULL)
    {
        cout<<"存储分配错误！"<<endl;
        exit(1);
    }
    last->link=newNode;
    last=newNode;
    last->link=first;
    cin>>val;
    while(val!=endTag)
    {
        newNode=new CircLinkNode<T>(val);
        if (newNode==NULL)
        {
            cout<<"存储分配错误！"<<endl;
            exit(1);
        }
        newNode->link=first->link;
        first->link=newNode;           //新建立元素总是在前面
        cin>>val;
    }
};

template <class T>
void CircList<T>::inputRear(T endTag)
{
    CircLinkNode<T> *newNode;
    newNode=last=first;                      //这里附加头结点只能为空，因为附加头结点完全没有办法输入！
    T val;
    //makeEmpty();                          //已经在主程序里清空过了。。。
    cin>>val;
    while(val!=endTag)
    {
        newNode=new CircLinkNode<T>(val);
        if (newNode==NULL)
        {
            cout<<"存储分配错误！"<<endl;
            exit(1);
        }
        last->link=newNode;
        last=newNode;
        cin>>val;
    }
    last->link=first;
};