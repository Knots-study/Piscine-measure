#include <stdio.h>

int main(void){
    char c = 'A';
    char *pc;
    pc = &c; //アドレスをpcに代入

    printf("%c, %d\n", *pc, *pc);//ポインタが指す値を表示
    *pc += 2; //pc+=2だとアドレスそのものを2つずらすことになる, *pc+=だと実体、65->67
    printf("%c, %d\n", *pc, *pc);
    return 0;
}
