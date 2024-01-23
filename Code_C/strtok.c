#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check (char c[]){
    for (int i=0;i<strlen(c);i++){
        if (islower(c[i])) return 0;
    }
    return 1;
}

int main(){
    char c[1000];
    gets(c);
    char *token=strtok(c," ");
    while (token != NULL){
    if (check(token)) printf ("%s ",token);
    token=strtok(NULL," ");
    }
    printf ("\n");
}