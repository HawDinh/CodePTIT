#include <stdio.h> 
#include <math.h>
int main(){
	int dai,rong;
	scanf("%d%d",&dai,&rong);
	for (int i=1;i<=rong;i++){
		for (int j=1;j<=dai;j++){
			if(i==rong||i==1||j==dai||j==1){
		printf("*");
	}else{
		printf(" ");
		}
	}
	printf("\n");
}
}

