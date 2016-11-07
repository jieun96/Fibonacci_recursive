#include <stdio.h>
#include <time.h>
int fib(int);
int main(){
	int n[20];
	int i,j;
	long b;
	const long r[20] = {10000000,1000000,100000,10000,1000,100,10,2,2,2,2,2,2,2,2,2,2,2,2,2};
	for(i=0;i<20;i++){
		n[i] = 5*i;
	//	n[i+10] = 100*(i+1);
	}
//	n[20] = 1500;
//	n[21] = 2000;
//	n[22] = 2500;
//	n[23] = 3000;

	printf("    n   totalTime            runTime\n");
	for(int j=0;j<20;j++){
		clock_t start, stop;
		start = clock();
		for(b = 1;b<r[j];b++)
			fib(n[j]);
		stop = clock();
		clock_t totalTime = stop-start;
		double runTime = (double)totalTime/(double)(r[j]);
		printf(" %4d %11d %18lf\n",n[j],totalTime,runTime);
	}
	return 0;
}
int fib(int n){
	if(n<=1)
		return n;
	else
		return fib(n-1)+fib(n-2);
}
