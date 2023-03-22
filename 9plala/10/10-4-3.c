#include <stdio.h>
#include <string.h>

int main (void){
    char *p[10] = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten"
    };

    char *temp;
    int min;

    for(int i=0; i<10; i++){
        min = i;
        for(int j=i+1; j<10; j++){
            if(strcmp(p[min],p[j]) > 0){// p[min]の方が大きい、p[j]の方が小さい
                min = j;//小さい文字のインデックスを、minに代入する
            }
        }
        temp = p[i];
        p[i] = p[min];
        p[min] = temp;
    }
    for (int i=0; i<10; i++){
        puts(p[i]);
    }

    return 0;
}
