#include <stdio.h>
#include <math.h>
int snt(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	} return 1;
}
int fibo(int n){
	int a1=1,a2=1,a;
	if (n<=2) return 1;
	else{
		while (a<=n){
			if (a==n) return 1;
			else {
			a=a1+a2;
			a2=a1;
			a1=a;
			}
		} return 0;
	}
}
int main(){
	int a,b; scanf ("%d%d",&a,&b);
	if (a>b){
		int c=a;
		a=b;
		b=c;
	}
	for (int i=a;i<=b;i++){
	if (snt(i)){
		int dem=0;
		int m=i;
		while (m>0){
			int j=m%10;
			dem+=j;
			m/=10;
			}
			if (fibo(dem)) printf ("%d ",i);
		}
	}
}
