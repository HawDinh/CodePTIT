#include<stdio.h>
int fibo(int n){
	int a1=1,a2=1,a;
	if (n<=2){
		if (n==0) a=0;
		else a=1;
	}
	else {
		int i=3;
		while (i<=n){
			a=a1+a2;
			a1=a2;
			a2=a;
			i++;
		}
	}
	return a;
}
int main(){
	int N; scanf("%d",&N);
	for (int i=0;i<N;i++) printf ("%d ",fibo(i));
}
