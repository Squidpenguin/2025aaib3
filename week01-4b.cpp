//week01-4b.cpp
#include <iostream> //使用c++外掛
using namespace std; //
int main()
{
	int a,b;
	cin >> a >> b; //c++讀入
	int ans=0;
	for (int i=a; i<=b; i++){
		if (i%3 == 0) ans+=i;
	}
	cout << ans; //c++輸出
}
