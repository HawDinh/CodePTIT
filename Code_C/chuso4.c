#include <stdio.h>
#include <math.h>

int bon(int n){
	while (n>0){
		int i=n%10;
		if (i==4) return 0;
		n/=10;
	} return 1;
}

int tn(int n){
	int m=n;
	int dao=0;
	while (m>0){
		int i=m%10;
		dao=dao*10+i;
		m/=10;
	}
	if (dao==n) return 1;
	else return 0;
}

int sum(int n){
	int tong=0;
	while (n>0){
		int i=n%10;
		tong+=i;
		n/=10;
	}
	if(tong%10==0) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int N; scanf("%d",&N);
		int a=pow(10,N-1);
		int b=pow(10,N);
		for (int i=a;i<b;i++){
			if (bon(i) && tn(i) && sum(i)) printf ("%d ",i);
		}
		printf ("\n");
	}
}