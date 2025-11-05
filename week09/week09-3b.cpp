//week09-3b.cpp
#include <iostream>
using namespace std;
int main()
{
	char c;
	while (cin >> c){
		if (c>='a' && c<='z') c=c-'a'+'A';
		else if (c>='A' && c<='Z') c=c-'A'+'a';
		cout << c;
	}
	cout << endl;
}
