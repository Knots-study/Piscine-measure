#include <stdio.h>

void main(){
    int a;                              
    printf("a=");                       
    scanf("%d",&a); //変数のアドレス指定(&),&がないと意図しない場所にデータが書き込まれる可能性があるため危険                    
    printf("aの値は%dです。¥n",a);       
}