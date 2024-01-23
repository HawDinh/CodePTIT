#include <stdio.h> 
#include <math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int tong=0;
	if(b>a){
	for (int i=a;i<=b;i++){
		tong+=i;
		}
	}
	else if(a>b){
		for (int i=b;i<=a;i++){
		tong+=i;
		}
	}
		printf("%d",tong);
	return 0;
}
