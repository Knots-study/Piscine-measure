#include <stdio.h>

int main (void){
    int data1[10] = {10, 15, 22, 45, 9, 66, 71, 4, 37, 82};
    int data2[10];
    int *pdata1, *pdata2;
    int count = 0;

    pdata1 = data1;
    pdata2 = data2;

    for(int i=0; i<10; i++){
        if(*pdata1 % 2 != 0){
            printf("%d\n", *pdata1);
            *pdata2 = *pdata1;
            pdata2++;
            count++;
        }
        pdata1++;
    }
    pdata2++;
    *pdata2 = '\0';

    printf("格納個数 = %d\n", count);
    return 0;
}
