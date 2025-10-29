//week08-bonus.cpp
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cout << "輸入四位數(不重複):";
    int n;
    cin >> n;
    for (int i=0; i<7; i++){
        vector<int> a;
        for (int i=0; i<4; i++){
            a.push_back(n%10);
            n /= 10;
        }
        sort(a.begin(), a.end());
        int M = a[3]*1000+a[2]*100+a[1]*10+a[0];
        int m = a[0]*1000+a[1]*100+a[2]*10+a[3];
        n = M-m;
        printf("%d-%d=%d\n",M,m,n);
    }
}
