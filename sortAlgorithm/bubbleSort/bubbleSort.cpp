#include<iostream>
#include<algorithm>
using namespace std;

template<class T>
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