#include <stdio.h> 
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	while (n--){
		int a;
		int sum=0;
		scanf("%d",&a);
		for (int i=1;i<a;i++){
			if(a%i==0){
				sum+=1;
			}}
			
			if(sum<=2){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
	}
	return 0;
}
