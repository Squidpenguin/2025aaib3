//week05-3c.cpp
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line; //part1:Input
    while (getline(cin,line)){
    //讀入一行 讀到Ctrl-Z
        stringstream ss(line); //part3:把字串用來斷字
        string word;
        ss >> word; //part5:解決空格問題 火車頭不用空格
        reverse(word.begin(),word.end());
        cout << word; //part5
        while (ss >> word){ //part3:把字串用來斷字
            reverse(word.begin(),word.end()); //part4:反過來
            cout << " " << word;
        }
        cout << endl; //part2:Output
        //cout << line << endl;
    }
}
