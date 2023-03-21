#include <stdio.h>

int main(void){
    char c;
    char *p; //ポインタ宣言

    c = 'A';
    p = &c; //アドレスをpに代入

    printf("%c\n", *p); //値を表示

    return 0;
}