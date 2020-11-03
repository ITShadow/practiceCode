#include<iostream>
#include<algorithm>
using namespace std;

/* template<class T>
void bubbleSort(T arr[], int n)
{
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(arr[j]>arr[j+1])
           swap(arr[j],arr[j+1]);
       }
   } 
} */

/*  void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    bool swapped; //用于标记数组是否有序
    for (i = 0; i < n-1; i++) 
    { 
        swapped = false; //初始化为 false
        for (j = 0; j < n-i-1; j++) 
        { 
            if (arr[j] > arr[j+1]) 
            { 
                swap(arr[j], arr[j+1]); 
                swapped = true; 
            } 
        } 

        // 如果swapped 为 false ,说明没有交换，数组有序，退出排序 
        if (swapped == false) 
            break; 
    } 
} */  /* 冒泡排序优化版本一，利用一个变量判断是否为有序 */

void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    bool swapped; //用于标记数组是否有序
    int lastSwappedIndex = 0; //记录最后一次交换的位置
    int sortBorder =n - 1; //将有序和无序部分的边界初始化为最后一个元素
    for (i = 0; i < n-1; i++) 
    { 
        swapped = false; //初始化为 false
        for (j = 0; j < sortBorder; j++) 
        { 
            if (arr[j] > arr[j+1]) 
            { 
                swap(arr[j], arr[j+1]); 
                swapped = true; 
                lastSwappedIndex = j;
            } 
        } 
        sortBorder = lastSwappedIndex;
        // 如果swapped 为 false ,说明没有交换，数组有序，退出排序 
        if (swapped == false) 
            break; 
    } 
} 
int main()
{
    int arr[10]={7,1,4,8,3,9,6,2,5,10};
    bubbleSort(arr,10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    system("pause");
    return 0;
}