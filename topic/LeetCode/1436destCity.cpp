/* ����һ��������·ͼ������·ͼ�е�������·������ paths ��ʾ������ paths[i] = [cityAi, cityBi] ��ʾ����·����� cityAi ֱ��ǰ�� cityBi �������ҳ�������е��յ�վ����û���κο���ͨ���������е���·�ĳ��С�

��Ŀ���ݱ�֤��·ͼ���γ�һ��������ѭ������·�����ֻ����һ�������յ�վ��

?

ʾ�� 1��

���룺paths = [["London","New York"],["New York","Lima"],["Lima","Sao Paulo"]]
�����"Sao Paulo" 
���ͣ��� "London" ���������ִ��յ�վ "Sao Paulo" ���������е�·���� "London" -> "New York" -> "Lima" -> "Sao Paulo" ��
ʾ�� 2��

���룺paths = [["B","C"],["D","B"],["C","A"]]
�����"A"
���ͣ����п��ܵ���·�ǣ�
"D" -> "B" -> "C" -> "A".?
"B" -> "C" -> "A".?
"C" -> "A".?
"A".?
��Ȼ�������յ�վ�� "A" ��
ʾ�� 3��

���룺paths = [["A","Z"]]
�����"Z"
?

��ʾ��

1 <= paths.length <= 100
paths[i].length == 2
1 <=?cityAi.length,?cityBi.length <= 10
cityAi?!=?cityBi
�����ַ������ɴ�СдӢ����ĸ�Ϳո��ַ���ɡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/destination-city
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> mp;

        for(auto c :paths)
        {
            mp[c[0]]++;
            mp[c[1]]++;
        }

        string res;
        for(int i=0;i<paths.size();i++)
        {
            if(mp[paths[i][1]]==1)
            {
                res=paths[i][1];
                break;
            }
        }
        return res;
    }
}; */

/* ��ϣ���¼����������Ϊ1�Һ��ŵ����յ� */