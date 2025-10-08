//week05-2.cpp 搞懂stringstream
#include <iostream> //cin cout
#include <string> //字串string
#include <sstream> //新的string變stream的外掛
using namespace std;
int main()
{
    string line;
    getline (cin,line); //一次讀入一整行
    cout << line << endl; //印出來加跳行

    stringstream ss(line); //(新的)把string變stream
    string word;
    while (ss >> word){
        cout << "ss讀到一個字:" << word << endl;
    }
}
