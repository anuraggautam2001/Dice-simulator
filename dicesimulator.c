#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char const argv[])
{asd:
    printf("enter the number of dice u want to roll ");
    int n, i;
    scanf("%d", &n);
    if (n > 50)
    {
        printf("the number is greater than 50 ");
        goto asd;
    }

    printf("values on the dice  are ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", rand() % 6 + 1);
    }
}
