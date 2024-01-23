#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long N;
		scanf("%lld",&N);
		int chan=0;
		int le=0;
		while(N!=0){
			int a=N%10;
			if(a%2==0) chan++;
			if(a%2!=0) le++;
			N/=10;
		}
		if(chan<le) printf("YES\n");
		else printf("NO\n");
	}
	
}
