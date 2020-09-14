#include<iostream>
#include<algorithm>
using namespace std;

template<typename T>

void insertionSort(T arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j-1]>arr[j])
            swap(arr[j-1],arr[j]);
            else
            break;
        }
    }

}

int main()
{
    int arr[10]={7,1,4,8,3,9,6,2,5,10};
    insertionSort(arr,10);
    for(int i=0;i<10;i++)
    {

    cout<<arr[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}