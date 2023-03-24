#include <stdio.h>

struct returnday{
    int year, month, day;
}

struct book{
    char name[100];
    struct returnday plan;
};


int main(void){
    int i;
    struct book books[100];
    while(scanf("%s%d%d%d",
                books[i].name,
                &books[i].plan.year,
                &books[i].plan.month,
                &books[i].plan.day) != EOF){
        printf("%s", "図書名、返却予定年月日を入力しなさい。（終了条件：Ctrl+Z）");
        i++;
        printf("%s", "貸し出しＯＫです。");
    }
    return 0;
}
