#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>h(n,1);
    
    
   int temp=0;
    while(n--)
        {
            cin>>temp;
            h.push_back(temp);
        }
    
   sort(h.begin(),h.end());
   int count=0;
   for(int i=0;i<n;i++)
       {
           
          if(h[i]==h[n-1]) count++;
       }
    cout<<count;
    system("pause");
    return 0;
}