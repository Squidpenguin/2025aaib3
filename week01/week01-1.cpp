//week01-1.cpp
//Leetcode 學習計畫 大海撈針 在haystack 找到needle
//28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //迴圈 所有位置找過
        int H = haystack.length(), N = needle.length();
        for (int i=0; i<=H; i++){
            if (haystack.substr(i,N) == needle) return i;//找到答案 回傳i
        }
        return -1;//沒找到答案 回傳-1
    }
};
