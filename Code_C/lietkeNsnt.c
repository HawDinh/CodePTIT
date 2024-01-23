#include <stdio.h>
#include <math.h>
int check(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	} return 1;
}
int main(){
		int n;
		scanf ("%d",&n);
		int dem=1;
		for (int i=2;dem<=n;i++){
		if (check(i)) 
		{
			printf ("%d\n",i);
			dem++;
		}
		}
}
