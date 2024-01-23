#include <stdio.h> 
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
	int a;
	scanf("%d",&a);
	int k=a%10;
	while (a>9){
		a=a/10;
	}
	if(k==a){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
}
	return 0;
}
