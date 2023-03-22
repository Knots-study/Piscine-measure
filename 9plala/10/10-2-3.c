#include <stdio.h>

int main (void){
    char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str2[30];
    char *pstr1, *pstr2;

    pstr1 = str1;
    pstr2 = str2 + 26; //26個先のアドレスを入れておく
    *pstr2 = '\0';pstr2--;

    while(*pstr1 != '\0'){
        *pstr2 = *pstr1;
        pstr1++;
        pstr2--;
    }

    printf("%s\n", str2);
    return 0;
}
