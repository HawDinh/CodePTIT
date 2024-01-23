#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    
    char a[201]; gets(a);

    int dai=strlen(a);
    char a1[101],a2[101];
    
    while (dai>1){
        int nua=dai/2;
        strcpy(a1,a,nua);
        a1[nua]='\0';
        strcpy(a2,a+nua);
    }

}


