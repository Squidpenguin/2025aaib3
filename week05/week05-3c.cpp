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
    //Ū�J�@�� Ū��Ctrl-Z
        stringstream ss(line); //part3:��r��Ψ��_�r
        string word;
        ss >> word; //part5:�ѨM�Ů���D �����Y���ΪŮ�
        reverse(word.begin(),word.end());
        cout << word; //part5
        while (ss >> word){ //part3:��r��Ψ��_�r
            reverse(word.begin(),word.end()); //part4:�ϹL��
            cout << " " << word;
        }
        cout << endl; //part2:Output
        //cout << line << endl;
    }
}
