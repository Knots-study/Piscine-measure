#include <stdio.h>

int main(){
    char c[4] = "aaa"; // a a a \0なので4文字
    for(int i=0;i<3;i++){
        printf("%c",c[i]);
    }
}