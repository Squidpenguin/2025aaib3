//week04-2.cpp
//vector<int> a的初始化(裡面要放甚麼值)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(3); //初始長度3 裡面都放0
    vector<int> b(3,88); //初始長度3 裡面都放88

    int c[10] = {1,2,3,9,8,7,4,5,6,0};
    vector<int> d(c,c+3); //c開始 再移3格結束
    for (int i=0; i<d.size(); i++) cout << d[i] << ' ';
    cout << "這是用c語言的陣列輔助 幫忙c++陣列初始化一堆值\n\n";

    vector<int> e(c,c+10); //c開始 再移10格結束
    for (int i=0; i<e.size(); i++) cout << e[i] << ' ';
    cout << "這是也用c語言的陣列輔助 幫忙c++陣列初始化一堆值\n\n";
}
