#include <stdio.h>

int main(void)
{
    int soft_drink_price = 198, milk_price = 138, money = 1000;
    double tax = 1.05;
    printf("%d円", (int)(money - (soft_drink_price + milk_price*2) * tax));
    return 0;
}