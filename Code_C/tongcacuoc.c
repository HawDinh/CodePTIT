#include <math.h>
int main(){
	int t;
	scanf("%d",&t);
		while(t--){
			int n;
			int sum=n;
			scanf("%d",&n);
			for (int i=1;i<=sqrt(n);i++){
				int t=n/i;
			if(n/i==0){
				sum=sum+i+t;
			}
			if(i*i==n){
				sum-=i;
			}
			}
			}
	}
