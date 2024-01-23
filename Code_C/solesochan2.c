#include <stdio.h> 
#include <math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int N;
	int i;
	scanf("%d",&N);
	int chan=0;
	int le=0;
	while(N>0){
		i=N%10;
		N/=10;
		if(i%2==0){
			chan++;
		}else{
			le++;
		}
	}
		printf("%d %d\n",le,chan);
}
	}

