#include <stdio.h>

int main (void){
    char str1[] = "AbcDefGHijk1234lmNOP";
    char *pstr; //ポインタの宣言
    pstr = str; //strの先頭のアドレスがpstrの中に入る, この場合のstrはstr[]の先頭のアドレスを示している

    while(*pstr != '\0'){
        printf("%c = %p\n",*pstr, pstr);
        if('a' <= *pstr && *pstr <= 'z'){
            *pstr -= 'a'-'A';
        }
        pstr++;
    }

    printf("%s\n", str);
    printf("%c = %p\n",str[0],str);

    return 0;
}
