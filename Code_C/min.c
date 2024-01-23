#include <stdio.h>
int check(long long N){
	while (N!=0){
		int n=N%10;
		if(n%2!=0){
			return 0;
			break;
		}N/=10;
	}return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
	long long N;
	scanf("%lld",&N);
	if(check(N)){
	printf("YES\n");
}else {printf("NO\n");
}
}}

