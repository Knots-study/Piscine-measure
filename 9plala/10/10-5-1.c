#include <stdio.h>

int main (void){
    char *Name[7] = {
        "Iizumi",
        "Kanto",
        "Kudo",
        "Sato",
        "Sugawara",
        "Matuda",
        "Wada"
    };
    
    char **pName;

    pName = Name;

    for(int i=0; i<7; i++){
        int j = 0;
        while(*(*pName + j) != '\0'){
            j++;
        }
        printf("%d : %s\n", j, *pName);
        pName++;
    }
    return 0;
}
