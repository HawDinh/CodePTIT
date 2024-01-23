#include <stdio.h>
#include <math.h>
long ucln(long a,long b){
	while (a!=b){
		if (a>b) a=a-b;
		if (b>a) b=b-a;
	} return a;
}
int main(){
	long a,b;
	scanf ("%ld%ld",&a,&b);
	for (long i=a;i<=b;i++){
	for (long j=a;j<=b;j++){
		if (ucln(i,j)==1) {
			if (i<j) printf ("(%d,%d)\n",i,j);
		}
	}
	}
}
