#include <stdio.h>

int main(){
	int N;
	scanf ("%d",&N);
	int D=N-1;
	for (int i=1;i<=N;i++){
		for (int i=1;i<=D;i++){
			printf("~");
		}
		D--;
			if (i==1||i==N){
			for (int i=1;i<=N;i++){
				printf ("*");
			}
		}else{
			printf ("*");
			for (int i=1;i<=N-2;i++){
				printf (".");
			}
			printf("*");
		}
	printf("\n");
	}
}
