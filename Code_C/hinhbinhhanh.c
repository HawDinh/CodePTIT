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
		for (int i=1;i<=N;i++){
			printf ("*");
		}
		printf("\n");
	}
}
