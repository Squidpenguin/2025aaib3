//week05-2.cpp �d��stringstream
#include <iostream> //cin cout
#include <string> //�r��string
#include <sstream> //�s��string��stream���~��
using namespace std;
int main()
{
    string line;
    getline (cin,line); //�@��Ū�J�@���
    cout << line << endl; //�L�X�ӥ[����

    stringstream ss(line); //(�s��)��string��stream
    string word;
    while (ss >> word){
        cout << "ssŪ��@�Ӧr:" << word << endl;
    }
}
