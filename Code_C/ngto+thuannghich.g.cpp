#include <stdio.h>
#include <math.h>
#include <string.h>
int nt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	} return 1;
}
int tn(int n){
	int m=n;
	int dao=0;
	while (n>0){
		int i=n%10;
		dao=dao*10+i;
		n/=10;
	} if(m==dao) return 1;
	else return 0;
}
int main(){
	int t;
	scanf ("%d",&t);
	while (t--){
		int a,b;
		scanf("%d%d",&a,&b);
		int cnt=0;
		for (int i=a;i<=b;i++){
			if(nt(i) && tn(i)) {
				cnt++;
				printf ("%d ",i);
				if (cnt%10==0) printf ("\n");
			}
		}
		printf ("\n");
	}
}
