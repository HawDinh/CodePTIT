#include <stdio.h>
int main(){
	int hang,cot;
	scanf("%d%d",&hang,&cot);
	if (hang>cot)
	{
		for (int i=hang;i>0;i--)
		{
		if(i>=cot)
		{
		for (int j=i;j>(i-cot);j--) printf("%d",j);
		}else
		{
		for (int j=i;j>0;j--) printf ("%d",j);
		for (int j=2;j<(hang-i);j++) printf ("%d",j);
		}
		printf("\n");
		}
	}
	else
	{
		for (int i=cot;i>(cot-hang);i--)
		{
		for (int j=i;j>0;j--) printf ("%d",j);
		for (int j=2;j<(cot-i+2);j++) printf ("%d",j);
		printf("\n");
		}
	}
}
