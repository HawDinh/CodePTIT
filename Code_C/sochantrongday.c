#include <stdio.h>
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
			if (a[i]%2 ==0){ 
			 printf ("%d ",a[i]);
			}
		}
		printf ("\n");
	}	
}
