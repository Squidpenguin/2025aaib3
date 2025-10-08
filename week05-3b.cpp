//week05-3b.cpp
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
        while (ss >> word){ //part3:把字串用來斷字
            reverse(word.begin(),word.end()); //part4:反過來
            cout << " " << word;
        }
        cout << endl; //part2:Output
        //cout << line << endl;
    }
}
