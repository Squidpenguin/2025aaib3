//week14-1c.cpp
#include <iostream>
using namespace std;
int f(int n)
{
	if (n==0) return 0;
	cout << n%10;
	f(n/10);
}

int main()
{
	int n;
	cin >> n;
	f(n);
	cout << "\n";
}
