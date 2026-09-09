//week01-3.cpp 學習計畫 Basic 第3題
// LeetCode Find the Index of the Occurrence in a String
//大海撈針 (在一大堆稻草堆裡, 找一枝真)
class Solution {
public:
    int strStr(string haystack, string needle) {
        //所有的程式題目, 都可以用 for(迴圈) if(判斷) 函式呼叫
        int N1 = haystack.length(), N2 = needle.length(); //函式呼叫, 字串的長度
        for (int i=0; i<= N1-N2 ; i++) { //迴圈
            if (haystack.substr(i,N2) == needle ) return i; //找到答案
            // 如果 大字串 的 .substr(開始,長度) 等於 小字串, 就找到答案了
        }
        return -1; // 找不到
    }
};
