#include <stdio.h>

int main()
{
    char a[6] = "Hello";
    char *pa = &a[0];

    printf("%s\n", pa);

    return 0;
}