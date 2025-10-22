//week02-1.cpp
#include <stdio.h>
int main()
{
	int a,n,ans=0;
	scanf("%d",&a);
	n = a;
	while (n>0){
		ans = ans*10 + n%10;
		n/= 10;
	}
	printf("%d+%d=%d\n",a,ans,a+ans);
}
