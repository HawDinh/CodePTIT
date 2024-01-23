#include<stdio.h>
#include<math.h>
int sum(int n){
	int sum=0;
	while (n>0){
		int i=n%10;
		n/=10;
		sum+=i;
	} return sum;
}
int main(){
		int n; scanf ("%d",&n);
		int a[101];
		for (int i=0;i<n;i++) scanf ("%d",&a[i]);
		for (int i=0;i<n;i++){
		for (int j=0;j<i;j++){
			if (sum(a[i])<sum(a[j])){
				int c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
		}
		for (int i=0;i<n;i++) printf ("%d ",a[i]);
}
