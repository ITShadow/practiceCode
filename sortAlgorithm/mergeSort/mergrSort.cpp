#include<iostream>
#include<algorithm>
using namespace std;

template<class T>
void __merge(T arr[],int l,int mid,int r)
{
    T aux[r-l+1];
    for(int i=l;i<=r;i++)
    aux[i-l]=arr[i];

    int i=l,j=mid+1;
    for(int k=l;k<=r;k++)
    {
        if(i>mid)
        {
            arr[k]=aux[j-l];
            j++;
        }
        else if(j>r)
        {
            arr[k]=aux[i-l];
            i++;
        }
        else if(aux[i-l]<aux[j-l])
        {
            arr[k]=aux[i-l];
            i++;
        }
        else
        {
            arr[k]=aux[j-l];
            j++;
        }

    }
    
}

template<class T>
void __mergeSort(T arr[],int l,int r)
{
    if(l>=r) 
    return;

    int mid=(l+r)/2;
    __mergeSort(arr,l,mid);
    __mergeSort(arr,mid+1,r);

    __merge(arr,l,mid,r);
}

template<class T>
void mergeSort(T arr[], int n)
{
    __mergeSort(arr,0,n-1);
}
int main()
{

int arr[10]={7,1,4,8,3,9,6,2,5,10};
    mergeSort(arr,10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    system("pause");
    return 0;
}