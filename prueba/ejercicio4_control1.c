//Realizar un algoritmo que produzca por pantalla lo siguiente:
#include <stdio.h>

int main()
{
    int c = 1;

    for (int i = 0; i < 10; i++)
    {
        int sum = 100;

        printf("%d\t->\t",c);

        for (int j = 0; j < 6; j++)
        {
            printf("%d\t",sum);
            sum += 10;
        }
        printf("\n");
        c++;
    }

    return 0;
}