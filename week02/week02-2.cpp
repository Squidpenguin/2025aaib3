//week02-2.cpp
//C++
#include <iostream> //IO串流外掛
#include <string> //字串外掛
using namespace std; //使用命名空間std
int main()
{
    cout << "input number:";
    string a,ans;
    cin >> a;
    //倒過來的迴圈 字串長度叫a.length()
    for (int i=a.length()-1; i>=0; i--){
        ans += a[i];
    }
    cout << a << ans;
}
