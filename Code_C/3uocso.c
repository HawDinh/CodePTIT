#include <stdio.h>
#include <math.h>
int a[1000001];
int sang(){
	for (int i=0;i<=1000000;i++){
	a[i]=1;
	}
	a[0]=a[1]=0;
	for (int i=2;i<=sqrt(1000000);i++){
	if(a[i]==1){
		for (int j=i*i;j<=1000001;j+=i){
			a[j]=0;
		}
	}
	}
}
int main(){
	sang();
	int t;
	scanf("%d",&t);
	while (t--){
		long long L,R;
		scanf("%lld%lld",&L,&R);
		int l=sqrt(L);
		int r=sqrt(R);
		int dem=0;
		if (1ll*l*l<L) ++l;
		for (int i=l;i<=r;i++){
			if(a[i]) dem++;
		}
		printf ("%d\n",dem);
	}
}
