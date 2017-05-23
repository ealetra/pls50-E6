
#include <stdio.h> /* needed for printf(), scanf() */

int main ()
{
const int div_num = 2;
    int n, n2; /* variable for the num given by the user */
    int piliko, ypoloipo;
    char ypol_char;

    printf("give a number\n");
    scanf("%i", &n);
    while (n < 0)
    {
        printf("lathos! give a number\n");
        scanf("%i", &n);
    }
    n2=n;
    while (n2 != '0'){
        piliko = n2 / div_num;
        ypoloipo = n2 % div_num;
        ypol_char = (ypoloipo == 0 ? '0' : '1');
        putchar(ypol_char);
        n2 = piliko;
    }
 return 0;
}
