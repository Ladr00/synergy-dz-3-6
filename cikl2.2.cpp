#include <stdio.h>

main()
{
	int a=0;
    printf("cifra dlya zaversheniya cikla = 7\n ");
    printf("vvedite cifru:\n ");
    while (a != 7)
    {
        
        scanf("%i", &a);

        if (a == 7)
        {
            printf("YES");
        }
        else
        {
            if(a > 7)
            {
                printf("cislo bolshe 7\n");
                if (a > 10)
                {
                    printf("cislo bolshe 10\n");
                }
                else
                {

                    printf("cislo menshe 10\n");
                }
            }
            else
            {
                printf("cislo menshe 7\n");
                printf("cislo menshe 10\n");
            }

            if (a % 2 == 0)
            {
                printf("cislo delitcya na 2\n");
            }
            else
            {
                printf("cislo NE delitcya na 2\n");
            }

            if (a % 3 == 0)
            {
                printf("cislo delitcya na 3\n");
            }
            else
            {
                printf("cislo NE delitcya na 3\n");
            }
		printf("vvedite cifru: ");
        }
    }
}
