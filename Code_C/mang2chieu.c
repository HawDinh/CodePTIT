#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=1;i<=n;i++){
			printf("%d ",a[i][i]);
	}printf("\n");
	for (int i=n;i>0;i--){
				printf("%d ",a[i][n-i+1]);
		}
	}
