#include <stdio.h>
int main(){
	int hang,cot;
	scanf ("%d %d",&hang,&cot);
	for (int i=1;i<=hang;i++){
	for (int j=i;j<=cot;j++){
		printf ("%d",j);
	}
	if(i>cot){
	for (int j=i;j>(i-cot);j--) printf ("%d",j);
	}else{
		for(int j=(cot-1);j>(cot-i);j--) printf ("%d",j);
}
		printf ("\n");
	}
}
