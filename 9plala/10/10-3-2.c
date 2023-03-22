#include <stdio.h>

int main (void){
    int a[101];
    int *pa;
    int cnt = 0;

    pa = a;

    for(int i=0; i<=100; i++){
        *pa = (i+cnt);
        cnt = *pa;
        printf("%d\n", *pa);
        pa++;
    }

    return 0;
}
