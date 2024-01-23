#include <stdio.h>
#include <math.h>
int ucln(long a,long b){
	while (a!=b){
		if (a>b) a=a-b;
		if (b>a) b=b-a;
	} return a;
}
int main(){
	long a,b;
	scanf ("%ld%ld",&a,&b);
	long c=ucln(a,b);
	long d=(a*b)/c;
	printf ("%ld\n%ld",c,d);
}
