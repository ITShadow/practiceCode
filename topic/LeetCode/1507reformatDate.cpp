/* ����һ���ַ���?date?�����ĸ�ʽΪ?Day Month Year?�����У�

Day?�Ǽ���?{"1st", "2nd", "3rd", "4th", ..., "30th", "31st"}?�е�һ��Ԫ�ء�
Month?�Ǽ���?{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}?�е�һ��Ԫ�ء�
Year?�ķ�Χ�� ?[1900, 2100]?֮�䡣
���㽫�ַ���ת��Ϊ?YYYY-MM-DD?�ĸ�ʽ�����У�

YYYY?��ʾ 4 λ����ݡ�
MM?��ʾ 2 λ���·ݡ�
DD?��ʾ 2 λ��������
?

ʾ�� 1��

���룺date = "20th Oct 2052"
�����"2052-10-20"
ʾ�� 2��

���룺date = "6th Jun 1933"
�����"1933-06-06"
ʾ�� 3��

���룺date = "26th May 1960"
�����"1960-05-26"
?

��ʾ��

�������ڱ�֤�ǺϷ��ģ����Բ���Ҫ�����쳣���롣

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/reformat-date
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע�������� */

/* class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string, string> s2month = {
            {"Jan", "01"},
            {"Feb", "02"},
            {"Mar", "03"},
            {"Apr", "04"},
            {"May", "05"},
            {"Jun", "06"},
            {"Jul", "07"},
            {"Aug", "08"},
            {"Sep", "09"},
            {"Oct", "10"},
            {"Nov", "11"},
            {"Dec", "12"}
        };

        stringstream ss(date);
        string year,month,day;
        ss>> day>>month>>year;
        month=s2month[month];
        day.pop_back();
        day.pop_back();
        if(day.size()==1) day="0"+day;

        return year + "-" + month + "-" + day;
    }
}; */

/* ע��stringstream�ָ��ַ�������ĺ��� */