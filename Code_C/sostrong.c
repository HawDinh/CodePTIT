#include <stdio.h> 
#include <math.h>
int giaithua(int n){
	int gt=1;
	for (int i=1;i<=n;i++){
		gt*=i;
	}
	return gt;
}
int tongcacgiaithua(int n){
	int tong=0;
	int a;
	while(n>0){
		a=n%10;
		tong+=giaithua(a);
		n/=10;
	}
	return tong;
}
int main(){
	int n;
	scanf("%d",&n);
	if(n==tongcacgiaithua(n)){
		printf("1");
	}else{
		printf("0");
	}
}

