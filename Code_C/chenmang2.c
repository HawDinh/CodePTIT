#include <stdio.h>
int main(){
	int t;
	scanf ("%d",&t);
	for (int i=t;i>0;i++){
		int N,M,p;
		scanf ("%d%d%d",&N,&M,&p);
		if (N<100 && N>=M && M>p && p>=0){
			int a[N],b[M];
			for (int i=0;i<N;i++) scanf ("%d",&a[i]);
			for (int i=0;i<M;i++) scanf ("%d",&b[i]);
			printf ("Test %d:\n",i);
			for (int i=0;i<p;i++) printf ("%d ",a[i]);
			for (int i=0;i<M;i++) printf ("%d ",b[i]);
			for (int i=p;i<N;i++) printf ("%d ",a[i]);
			printf ("\n");
		}
	}
}
