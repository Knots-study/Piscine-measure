#include <stdio.h>

int main (void){
     char str[] = "Computer";
     char *pstr; //ポインタの宣言
     pstr = str; //strの先頭のアドレスがpstrの中に入る, この場合のstrはstr[]の先頭のアドレスを示している
     
     while(*pstr != '\0'){
          putchar(*pstr);
	  pstr++;
     }
     putchar('\n');
     return 0;  
}
