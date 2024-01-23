#include <stdio.h>
#include <math.h>

int daucuoi(long long n){
	int cuoi=n%10;
	long long m=n;
	while (m>9){
		m/=10;
	}
	int dau=m%10;
	 if(cuoi*2==dau || dau*2==cuoi) return 1;
	else return 0;
}
int tn(long long n){
	long long m=n/10;
	long long dao=0;
	while (m>9){
		int i=m%10;
		m/=10;
		dao=dao;
		dao=dao*10+i;
	}
	long long c=dao;
	long long dao1=0;
	while (c>0){
		int i=c%10;
		c/=10;
		dao1=dao1*10+i;
	}
	if(dao==dao1) return 1;
	else return 0;
	return dao;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		long long n; scanf("%lld",&n);
		if (tn(n) && daucuoi(n)) printf ("YES");
		else printf("NO");
		printf ("\n");
	}
}