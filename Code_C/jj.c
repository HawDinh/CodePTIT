#include<stdio.h>
#include<string.h>

int main() {
    char s[100005];
    scanf("%s", s);
    char s1[100005];
    char check = s[strlen(s) - 1];
    int dem = 0;
    
    for (int i = strlen(s) - 1; i >= 0; i--) {
        if (s[i] > check) {
            check = s[i];
            s1[dem] = s[i];
            dem++;
        }
    }
    
    for (int i = dem - 1; i >= 0; i--) {
        printf("%c", s1[i]);
    }
    
    return 0;
}
