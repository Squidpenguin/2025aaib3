//week11-4b.cpp
#include <iostream>
using namespace std;
int max_digit(int n)
{
	int ans = n%10;
	while (n>0){
		if (n%10 > ans) ans=n%10;
		n /= 10;
	}
	return ans;
}

int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/*よC++mainㄧ计单基よCmainㄧ计
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}*/
