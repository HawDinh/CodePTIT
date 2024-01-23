#include <stdio.h> 
#include <math.h>
int main(){
	int n;
	scanf ("%d\n",&n);
	for (int i=1;i<=n;i++){
		int N;
		scanf("%d",&N);
		int x=sqrt(N);
		if(x*x==N){
		printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
