#include <stdio.h> 
#include <math.h>
int main(){
	unsigned long n;
	scanf("%lu",&n);
	for(int i=1;i<=n;i++){
		unsigned long a;
		scanf("%ld",&a);
		unsigned long long b=2*a;
		printf("%lld\n",b);
}
}
