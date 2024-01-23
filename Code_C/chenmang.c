#include <stdio.h>
int main(){
	int a,b;
	scanf ("%d%d",&a,&b);
	int A[a];
	for (int i=0;i<a;i++) scanf ("%d",&A[i]);
	int B[b];
	for (int i=0;i<b;i++) scanf ("%d",&B[i]);
	int c;
	scanf ("%d",&c);
	for (int i=0;i<c;i++) printf ("%d ",A[i]);
	for (int i=0;i<b;i++) printf ("%d ",B[i]);
	for (int i=c;i<a;i++) printf ("%d ",A[i]);
}
