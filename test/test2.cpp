#include<iostream>
using namespace std;

int main()
{
    int number,i;
    cout<<" please enter a number"<<endl;

    cin>>number;

    for(int i=2;i<number-1;i++)
    {
        if(number%i==0) break;
    }
    if(i<number) cout<<number<<"isnt sushu"<<endl;
    else cout<<number<<" is sushu"<<endl;

    system("pause");
    return 0;

}