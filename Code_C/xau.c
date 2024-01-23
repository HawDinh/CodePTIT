#include <stdio.h>
#include <string.h>
int main(){
	char s[225];
	gets(s);
	for (int i=0;i<strlen(s);i++){
		if (i==0){
			if(s[i]>="a"&&s[i]<="z") s[i]-=32;
		}else{
			if(s[i]>="A"&&s[i]<="Z"&&s[i]!=" ") s[i]+=32;
		}
	}
	printf("%s",s);
}
