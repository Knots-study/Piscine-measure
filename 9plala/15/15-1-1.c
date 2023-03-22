#include <stdio.h>

struct employee{
    int no;
    char name[20];
    char post[20];
    int years;
    int salary;
};

int main(void){
    struct employee em[20]= {
        {78027,"神保直樹","課長",21,346780},
        {84004,"相原彰子","主任",15,223640},
        {87022,"本郷幸子","",12,208760},
        {93042,"三上葵","",6,176530},
        {95005,"佐々木翠","",4,166700},
        {99009,"長崎宏美","",1,150140},
        {0,"","",0,0}
    };

    for(int i=0; em[i].no != 0; i++){
        printf( "%5d     %-12s %5s  %6d	%6d\n", 
			em[i].no, em[i].name, em[i].post, 
			em[i].years, em[i].salary );
    }

    return 0;
}