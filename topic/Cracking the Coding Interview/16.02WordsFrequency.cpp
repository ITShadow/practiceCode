/* 设计一个方法，找出任意指定单词在一本书中的出现频率。

你的实现应该支持如下操作：

WordsFrequency(book)构造函数，参数为字符串数组构成的一本书
get(word)查询指定单词在书中出现的频率
示例：

WordsFrequency wordsFrequency = new WordsFrequency({"i", "have", "an", "apple", "he", "have", "a", "pen"});
wordsFrequency.get("you"); //返回0，"you"没有出现过
wordsFrequency.get("have"); //返回2，"have"出现2次
wordsFrequency.get("an"); //返回1
wordsFrequency.get("apple"); //返回1
wordsFrequency.get("pen"); //返回1
提示：

book[i]中只包含小写字母
1 <= book.length <= 100000
1 <= book[i].length <= 10
get函数的调用次数不会超过100000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/words-frequency-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class WordsFrequency {
public:
    unordered_map<string,int> mp;
    WordsFrequency(vector<string>& book) {
        for(auto a:book)
        {
            mp[a]++;
        }
    }
    
    int get(string word) {
        return mp[word];
    }
};

/**
 * Your WordsFrequency object will be instantiated and called as such:
 * WordsFrequency* obj = new WordsFrequency(book);
 * int param_1 = obj->get(word);
 */ 

/* 就是设计一个类。类里面实现功能 */