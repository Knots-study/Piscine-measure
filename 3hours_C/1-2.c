#include <stdio.h>

int main(){
    int array2D[3][5] = {
        {3,13,32,14,55},
        {18,26,32,88,99},
        {90,54,0,2,6}
    };

    int rowCount = 3, colCount = 5;
    for(int i=0; i<rowCount; i++){
        for(int j=0; j<colCount; j++){
            printf("%d行目の%d列目の値は%dです。\n", i+1, j+1, array2D[i][j]);
        }
    }
}