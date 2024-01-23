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
		for (int i=0;i<N/2;i++){
			if (a[i]!=a[N-i-1]){ 
			 printf ("NO\n");
			 break;
			}
			else {
				printf ("YES\n");
				break;
			}
		}
	}	
}
