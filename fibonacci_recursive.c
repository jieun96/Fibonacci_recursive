#include <stdio.h>
int fib(int);
int main(){
	int n;
	printf("입력 : ");
	scanf("%d",&n);
	printf("fib = %d\n",fib(n));
	return 0;
}
int fib(int n){
	if(n<=1)
		return n;
	else
		return fib(n-1)+fib(n-2);
}
