#include<iostream>
#include<cmath>
#include<cassert>
#include<ctime>

using namespace std;

template<typename T>
int binarySearch(T arr[],int n, T target)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==target)
        return mid;

        if(target>arr[mid])
        l=l+1;
        else
        r=mid-1;
    }
    return -1;
}

int main()
{
    int arr[10]={2,1,3,5,4,7,6,8,10,9};
    int temp=binarySearch(arr,10,5);
    int temp1=binarySearch(arr,10,11);
    cout<<temp<<endl;
    cout<<temp1<<endl;
    system("pause");
    return 0;
}

/* int binarySearch(vector<int>& nums, int target){
  if(nums.size() == 0)
    return -1;

  int left = 0, right = nums.size();
  while(left < right){
    // Prevent (left + right) overflow
    int mid = left + (right - left) / 2;
    if(nums[mid] == target){ return mid; }
    else if(nums[mid] < target) { left = mid + 1; }
    else { right = mid; }
  }

  // Post-processing:
  // End Condition: left == right
  if(left != nums.size() && nums[left] == target) return left;
  return -1;
} */
/* �����ڲ�����Ҫ���������е�ǰ��������ֱ�����ھ�������Ԫ�ػ�������
һ��ʵ�ֶ��ֲ��ҵĸ߼�������
����������Ҫ����Ԫ�ص�ֱ�����ھӡ�
ʹ��Ԫ�ص����ھ���ȷ���Ƿ����������������������������ҡ�
��֤���ҿռ���ÿһ���������� 2 ��Ԫ�ء�
��Ҫ���к��� ����ʣ�� 1 ��Ԫ��ʱ��ѭ�� / �ݹ������ ��Ҫ����ʣ��Ԫ���Ƿ���������� */

/* int binarySearch(vector<int>& nums, int target){
    if (nums.size() == 0)
        return -1;

    int left = 0, right = nums.size() - 1;
    while (left + 1 < right){
        // Prevent (left + right) overflow
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid;
        } else {
            right = mid;
        }
    }

    // Post-processing:
    // End Condition: left + 1 == right
    if(nums[left] == target) return left;
    if(nums[right] == target) return right;
    return -1;
} */

/* ������������Ҫ���ʵ�ǰ���������������е�ֱ�������ھ�������Ԫ�ػ�������
ʵ�ֶ��ֲ��ҵ���һ�ַ�����
����������Ҫ����Ԫ�ص�ֱ�������ھӡ�
ʹ��Ԫ�ص��ھ���ȷ���������һ�������
��֤���ҿռ���ÿ�������������� 3 ��Ԫ�ء�
��Ҫ���к��� ��ʣ�� 2 ��Ԫ��ʱ��ѭ�� / �ݹ������ ��Ҫ��������Ԫ���Ƿ���������� */