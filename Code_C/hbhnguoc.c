#include <stdio.h>
int main(){
	int cao,rong;
	scanf ("%d%d",&cao,&rong);
	for (int i=1;i<=cao;i++){
			for (int j=1;j<i;j++) printf("~");
				if (i==1||i==cao) {
					for (int i=1;i<=rong;i++) printf ("*");
				}else {
					printf ("*");
					for (int i=1;i<=rong-2;i++) printf (".");
					printf ("*");
				}
		printf ("\n");
	}
}
