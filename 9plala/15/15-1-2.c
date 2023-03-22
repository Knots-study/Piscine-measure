#include <stdio.h>

struct student{
    int no;
    double japanese, math, science, community;
    double average;
    char assessment; 
};

int main(void){
    struct student st[20]= {
        {1000, 85, 74, 63, 90, 0.0, '.'},
        {1001, 78, 65, 70, 62, 0.0, '.'},
        {1002, 89, 92, 88, 76, 0.0, '.'},
        {1003, 32, 48, 66, 25, 0.0, '.'},
	{1004, 92, 76, 81, 98, 0.0, '.'},
    };

    for(int i=0; i<5; i++){
	st[i].average = (st[i].japanese + st[i].math + st[i].science + st[i].community)/4.0;
	if(st[i].average >= 80.0){
	    st[i].assessment = 'A';
	}else if(st[i].average >= 70.0  && st[i].average < 80.0){
	    st[i].assessment = 'B';
	}else if(st[i].average >= 60.0  && st[i].average < 70.0){
	    st[i].assessment = 'C';
	}else{
	    st[i].assessment = 'D';
	}
        printf( "%d %f %f %f %f %.2f %c\n", 
		st[i].no, st[i].japanese,  st[i].math,  st[i].science, st[i].community, st[i].average, st[i].assessment); 
    }

    return 0;
}
