#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/* template<class T>
int __partition(T arr[],int l,int r)
{
    T v=arr[l];

    int j=l;
    for(int i=l+1;i<=r;i++)
    {
        if(arr[i]<v)
        {
            swap(arr[j+1],arr[i]);
            j++;
        }
    }
    swap(arr[l],arr[j]);
    return j;
}


template<class T>
void __quickSort(T arr[],int l,int r)
{
    if(l>=r)
    return;

    int p=__partition(arr,l,r);
    __quickSort(arr,l,p-1);
    __quickSort(arr,p+1,r);
}


template<class T>
void quickSort(T arr[],int n)
{
    __quickSort(arr,0,n-1);
} */




void quickSort(vector<int>& arr,int left,int right)
{
  int low=left;
  int high=right;
  //下面两句的顺序一定不能混，否则会产生数组越界！！！very important！！！
  if(low>high)//作为判断是否截止条件
    return;
  int k=arr[low];//额外空间k，取最左侧的一个作为衡量，最后要求左侧都比它小，右侧都比它大。
  while(low<high)//这一轮要求把左侧小于a[low],右侧大于a[low]。
  {
    while(low<high&&arr[high]>=k)//右侧找到第一个小于k的停止
    {
      high--;
    }
    //这样就找到第一个比它小的了
    arr[low]=arr[high];//放到low位置
    while(low<high&&arr[low]<=k)//在low往右找到第一个大于k的，放到右侧a[high]位置
    {
      low++;
    }
    arr[high]=arr[low];   
  }
  arr[low]=k;//赋值然后左右递归分治求之
  quickSort(arr, left, low-1);
  quickSort(arr, low+1, right);  
}
 
 int main()
{

vector<int>arr={7,1,4,8,3,9,6,2,5,0};
    quickSort(arr,0,10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    system("pause");
    return 0;
}