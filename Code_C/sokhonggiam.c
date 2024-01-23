#include <stdio.h>
#include <math.h>
int check(int n){
	int r=n%10;
	while(n!=0){
		if(r<n%10) return 0;
		r=n%10;
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int N;
		scanf("%d",&N);
		int a=pow(10,N-1);
		int b=pow(10,N);
		for (int i=a;i<b;i++){
			if(check(i)){
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}
