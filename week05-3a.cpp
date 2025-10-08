//week05-3a.cpp
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string line; //part1:Input
    while (getline(cin,line)){
    //讀入一行 讀到Ctrl-Z

    //part2:Output
        cout << line << endl;
    }
}
