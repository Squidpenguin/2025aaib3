//week03-1.cpp
//c++ 陣列 vector<int>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "enter 4 nums: ";
    vector<int> a; //伸縮自如的陣列

    int now;
    for (int i=0; i<4; i++){
        cin >> now;
        a.push_back(now); //推到a的最後面
    }

    for (int i=0; i<a.size(); i++){
        cout << a[i] << ' '; //數字後面有空格
    }

    cout << "現在程式碼裡 又推入99 88 兩個數字\n";

    a.push_back(99);
    a.push_back(88);

    for (int i=0; i<a.size(); i++){
        cout << a[i] << ' ';
    }
}
