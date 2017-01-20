
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    while (1)
    {
        system("cls");
        srand(time(NULL));
        int num1 = abs(rand()%100000);
        printf("\n No.1 %.6d\n\n No.2 ",num1);

        int num2 = abs(rand()%1000);
        printf("%.3d\n",num2);
        for(int n=3; n>0; n--)
        {
            int num2 = abs(rand()%1000);
            printf("      %.3d\n",num2);
        }
        int num3 = abs(rand()%100);
        printf("\n No.3 %.2d\n\n\n",num3);
        system("pause");
    }
    return 0;
}
