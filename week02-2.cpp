//week02-2.cpp
//C++
#include <iostream> //IO��y�~��
#include <string> //�r��~��
using namespace std; //�ϥΩR�W�Ŷ�std
int main()
{
    cout << "input number:";
    string a,ans;
    cin >> a;
    //�˹L�Ӫ��j�� �r����ץsa.length()
    for (int i=a.length()-1; i>=0; i--){
        ans += a[i];
    }
    cout << a << ans;
}
