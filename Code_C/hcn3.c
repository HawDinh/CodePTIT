#include <stdio.h>
int main(){
	int hang,cot;
	scanf ("%d %d",&hang,&cot);
	for (int i=1;i<=hang;i++){
	if(i==1)
	{
	for (int j=1;j<=cot;j++) printf ("%d",j);
	}
	else{
	if(i>cot){
	for (int j=i;j>(i-cot);j--) printf ("%d",j);
	}else{
		for(int j=i;j>0;j--) printf ("%d",j);
		for (int j=2;j<=(cot+1-i);j++) printf ("%d",j);
}
}
		printf ("\n");
	}
}
