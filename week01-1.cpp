//week01-1.cpp
//Leetcode �ǲ߭p�e �j�����w �bhaystack ���needle
//28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //�j�� �Ҧ���m��L
        int H = haystack.length(), N = needle.length();
        for (int i=0; i<=H; i++){
            if (haystack.substr(i,N) == needle) return i;//��쵪�� �^��i
        }
        return -1;//�S��쵪�� �^��-1
    }
};
