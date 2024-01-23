#include <stdio.h>
#include <math.h>
int fibo(int n){
	int a1=1,a2=1,a;
	while (a<=n){
		if(a==n) return 1;
		else{
			a=a1+a2;
			a2=a1;
			a1=a;
		}
	}
	return 0;
}
int main(){
	int N; scanf ("%d",&N);
	if (fibo(N)==1) printf("1");
	if (fibo(N)==0) printf("0");
}
