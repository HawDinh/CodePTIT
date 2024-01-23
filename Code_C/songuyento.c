#include <stdio.h> 
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	while (n--){
		int a;
		int sum=0;
		scanf("%d",&a);
			for (int i=2;i<=(int)sqrt(a);i++){
			if(a%i==0){
				sum+=1;
			}}
			
			if(sum<1){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
	}
	return 0;
}
