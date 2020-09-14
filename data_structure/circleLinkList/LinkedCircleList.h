//功能代码已经全部改写完成了，只剩下的就是测试部分了，单链表改循环链表还是很容易改的！
//采用模板类来写的代码，不能分开写！

#ifndef LINKEDCircList_H
#define LINKEDCircList_H

template <class T>
struct CircLinkNode
{
    T data;
    CircLinkNode<T> *link;
    CircLinkNode(CircLinkNode<T> *ptr){link=ptr;}
    CircLinkNode(const T& item,CircLinkNode<T> *ptr){data=item;link=ptr;}
    //初始化的方式很有特性啊
};

template <class T>
class CircList
{
public:
    CircList();
    CircList(const T &x);
    CircList(CircList<T>& L);               //复制构造函数
    ~CircList(){makeEmpty();}
    void makeEmpty();
    int Length()const;
    CircLinkNode<T> *getHead()const {return first;}        //返回头结点的地址
    CircLinkNode<T> *Search(T &x);
    CircLinkNode<T> *Locate(int i);
    bool getData(int i,T &x);
    bool setData(int i,T &x);
    bool Insert(int i,T &x);
    bool Remove(int i,T &x);
    void Sort();
    void inputFront(T endTag);
    void inputRear(T endTag);
    void output();
    CircList<T>& operator=(CircList<T>&L);
protected:
    CircLinkNode<T> *first;
    CircLinkNode<T> *last;
};
//#include "LinkedCircList.hpp"
#endif 