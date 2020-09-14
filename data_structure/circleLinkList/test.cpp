#include <iostream>
#include "LinkedCircleList.h"
using namespace std;

int main()
{
    CircList<int> a;
    CircList<int> b(10);
    cout<<"以前插法建立循环链表，并且以0符号结束！"<<endl;
    b.inputFront(0);
    cout<<"输出刚建立的循环链表为："<<endl;
    b.output();

    cout<<"测试复制构造函数c"<<endl;
    CircList<int> c(b);
    cout<<"输出复制构造函数c"<<endl;
    c.output();
    cout<<"测试重载‘=’运算"<<endl;
    a=b;
    cout<<"输出a链表"<<endl;
    a.output();

    cout<<"清空该循环链表"<<endl;
    b.makeEmpty();
    cout<<"以后插法建立循环链表，并以符号0结束！"<<endl;
    b.inputRear(0);
    cout<<"输出刚建立的循环链表"<<endl;
    b.output();
    cout<<"输出链表的长度"<<endl;
    cout<<b.Length()<<endl;
    cout<<"请输入要查找的元素"<<endl;
    int x;
    CircLinkNode<int> *p;
    cin>>x;
    p=b.Search(x);
    if (p!=NULL)
    {
        cout<<"找到该元素，在链表中！"<<endl;
    }
    else
        cout<<"你要查找的元素不存在！"<<endl;
    cout<<"请输入要查找的元素位置"<<endl;
    int i;                              //使用没有初始化的变量，运行会出现严重的错误，但是编译时可以通过的
    cin>>i;
    p=b.Locate(i);
    if (p!=NULL)
    {
        cout<<"在链表中找到该位置"<<endl;
    }
    else
        cout<<"您输入的位置不正确"<<endl;
    cout<<"请输入您要查找的位置和数据"<<endl;
    int m,n;
    cin>>m>>n;
    if (b.getData(m,n)==true)
    {
        cout<<"正确找到！"<<endl;
    }
    else
        cout<<"您输入的位置和数据不匹配"<<endl;
    cout<<"请输入要插入的位置和数据"<<endl;
    cin>>m>>n;
    if (b.setData(m,n)==true)
    {
        cout<<"插入成功！"<<endl;
    }
    else
    {
        cout<<"插入失败！"<<endl;
    }
    cout<<"输出该循环链表"<<endl;
    b.output();
    cout<<"请输入要插入的节点"<<endl;
    cin>>m>>n;
    if (b.Insert(m,n)==true)
    {
        cout<<"插入成功"<<endl;
    }
    else
    {
        cout<<"插入失败"<<endl;
    }
    cout<<"插入后输出"<<endl;
    b.output();
    cout<<"请输入要删除的节点"<<endl;
    cin>>m>>n;
    if (b.Remove(m,n)==true)
    {
        cout<<"删除成功"<<endl;
    }
    else
    {
        cout<<"删除失败"<<endl;
    }
    cout<<"删除节点以后"<<endl;
    b.output();
    cout<<"将链表b的全部复制给a"<<endl;
    a=b;
    cout<<"输出a链表"<<endl;
    a.output();
    cout<<"测试完成“<<endl;
    return 0;
}