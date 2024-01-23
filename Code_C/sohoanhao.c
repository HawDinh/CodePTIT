#include <stdio.h>
#include <math.h>
int check(int n){
	int dem=1;
	for (int i=2;i<=sqrt(n);i++){
		int t=n/i;
		if(n%i==0){
			if (t!=i) dem=dem+i+t;
			else dem+=i;
		}
	}
	if(dem==n) return 1;
	return 0;
}
int main(){
	int n;
	scanf ("%d",&n);
	for (int i=2;i<n;i++){
		if (check(i)) printf ("%d ",i);
	}
}
