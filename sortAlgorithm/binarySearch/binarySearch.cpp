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
/* 它用于查找需要访问数组中当前索引及其直接右邻居索引的元素或条件。
一种实现二分查找的高级方法。
查找条件需要访问元素的直接右邻居。
使用元素的右邻居来确定是否满足条件，并决定是向左还是向右。
保证查找空间在每一步中至少有 2 个元素。
需要进行后处理。 当你剩下 1 个元素时，循环 / 递归结束。 需要评估剩余元素是否符合条件。 */

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

/* 它用于搜索需要访问当前索引及其在数组中的直接左右邻居索引的元素或条件。
实现二分查找的另一种方法。
搜索条件需要访问元素的直接左右邻居。
使用元素的邻居来确定它是向右还是向左。
保证查找空间在每个步骤中至少有 3 个元素。
需要进行后处理。 当剩下 2 个元素时，循环 / 递归结束。 需要评估其余元素是否符合条件。 */