#include<iostream>
#include<algorithm>
using namespace std;

template<class T>
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
}

int main()
{

int arr[10]={7,1,4,8,3,9,6,2,5,10};
    quickSort(arr,10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    system("pause");
    return 0;
}