#include <stdio.h>

int main(){
    int *px;
    int x = 100;
    px = &x;
    printf("%p\n", px);
}