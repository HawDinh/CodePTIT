#include <stdio.h>
#include <math.h>
int nt(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf ("%d",&t);
	while (t--){
		int N;
		scanf("%d",&N);
		int a[N];
		for (int i=0;i<N;i++){
			scanf ("%d",&a[i]);
		}
		for (int i=0;i<N;i++){
			if (nt(a[i])){
				printf ("%d ",a[i]);
			}
		}
		printf ("\n");
	}	
}
