#include <stdio.h>
int main()
{
int N;
int dem=0;
scanf ("%d",&N);
if (N<1000000000){
for (int i=N;i>=1;i--){
	if(N%i==0){
		dem++;
	}
}
	if (dem<3){
		printf ("THIEU");
	}
	else if (dem>=3){
		int cnt=0;
	for (int i=N;i>=1;i--){
	if(N%i==0){
	cnt ++;
	printf ("%d ",i);
}
	if(cnt>=3) break;
	}
	}
}
}

