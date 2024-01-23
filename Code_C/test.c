#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--) {
	long long N;
		scanf("%lld",&N);
		int n=N%10;
		N/=10;
		while(N>=0){
		if(n<N/10){
		printf("NO\n");
		break;
		} n=N%10;
		N/=10;
	if(N==0){
		printf("YES\n");
	break;
}
}
	return 0;
}
}
