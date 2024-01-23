#include <stdio.h>
#include <math.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N;
		scanf("%d",&N);
		int dem=0;
		for(int i=1;i<=sqrt(N);i++){
			int t=N/i;
			if (N%i==0){
			if(i!=t){
				if(i%2==0) dem++;
				if(t%2==0) dem++;
			}else{
				if(i%2==0) dem++;
			}
		}
	}
		printf("%d\n",dem);
}
}
