#include<iostream>
#include<algorithm>
using namespace std;

template<typename T>
void selectionSort(T arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minIndex]>arr[j])
                minIndex=j;
        }
            
        swap(arr[minIndex],arr[i]);
        
    }
}

int main()
{
    int arr[10]={7,1,4,8,3,9,6,2,5,10};
    selectionSort(arr,10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    system("pause");
    return 0;
}