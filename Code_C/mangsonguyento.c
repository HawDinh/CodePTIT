#include <stdio.h> 
#include <math.h>
int check(int a){
		int sum=0;
		scanf("%d",&a);
			for (int i=2;i<=(int)sqrt(a);i++){
			if(a%i==0){
				sum+=1;
			}}
			
			if(sum<1){
				return 1;
			}else{
				return 0;
			}
	}
	int main() {
		int m,n;
		int sum=0;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
	if(check(a[i][j])) sum+=a[i][j];
		}
	}
	printf("%d",sum);
}
