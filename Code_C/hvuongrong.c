#include <stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	for (int i=1;i<=N;i++){
		if (i==1 || i==N){
			for (int i=1;i<=N;i++){
				printf ("*");
			}
		}else{
			printf ("*");
			for (int i=1;i<=N-2;i++){
				printf (".");
			}
			printf ("*");
		}
		printf ("\n");
	}
}
