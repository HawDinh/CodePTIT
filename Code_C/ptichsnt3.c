#include <stdio.h>
#include <math.h>
#include <string.h>
int nt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	} return 1;
}
void in(int n){
	for (int i=2;i<=sqrt(n);i++){
		int dem=0;
		while (n%i==0 && nt(i)==1){
			dem++;
			n/=i;
		}
		if(dem!=0) printf ("%d(%d) ",i,dem);
	}
	if (n!=1) printf ("%d(1)",n);
}
int main(){
	int t; scanf ("%d",&t);
	for (int j=1;j<=t;j++){
		int N; scanf("%d",&N);
		printf ("Test %d: ",j);
		in(N);
		printf ("\n");
	}
}
