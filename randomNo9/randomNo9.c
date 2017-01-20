
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    while (1)
    {
        system("cls");
        srand(time(NULL));
        int a=3;
        int num1 = abs(rand()%10000);
        printf("\n No.1 %.5d9\n\n No.2 ",num1);

        int num2 = abs(rand()%100);
        printf("%.2d9\n",num2);
        while (a)
        {
            int num2 = abs(rand()%100);
            printf("      %.2d9\n",num2);
            a--;
        }
        int num3 = abs(rand()%10);
        printf("\n No.3 %.1d9\n\n\n",num3);
        system("pause");
    }
    return 0;
}
