#include <stdio.h>
long long fibonacci(long long n){
	if (n==1||n==2) return 1;
	else {
	long long a1=1,a2=1,a;
	int i=3;
	while (i<=n){
		a=a1+a2;
		a1=a2;
		a2=a;
		i++;
	}
	return a;
	}
}
int main(){
	int t; scanf ("%d",&t);
	while (t--){
		long long n;
		scanf ("%lld",&n);
		printf ("%lld\n",fibonacci(n));
	}
	return 0;
}
