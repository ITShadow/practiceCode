/* ����һ��?m?* n?�ľ���?grid�������е�Ԫ�������ǰ��л��ǰ��У����Էǵ���˳�����С�?

����ͳ�Ʋ�����?grid?�� ���� ����Ŀ��

?

ʾ�� 1��

���룺grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
�����8
���ͣ������й��� 8 ��������
ʾ�� 2��

���룺grid = [[3,2],[1,0]]
�����0
ʾ�� 3��

���룺grid = [[1,-1],[-1,-1]]
�����3
ʾ�� 4��

���룺grid = [[-1]]
�����1
?

��ʾ��

m == grid.length
n == grid[i].length
1 <= m, n <= 100
-100 <= grid[i][j] <= 100

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/count-negative-numbers-in-a-sorted-matrix
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int num=0;
        for (auto x:grid){
            int l=0,r=(int)x.size()-1,pos=-1;
            while (l<=r){
                int mid=l+((r-l)>>1);
                if (x[mid]<0){
                    pos=mid;
                    r=mid-1;
                }
                else l=mid+1;
            }
            if (~pos) num+=(int)x.size()-pos;// pos=-1��ʾ��һ��ȫ��>=0����������ͳ��
        }
        return num;
    }
}; */