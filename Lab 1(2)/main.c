#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

int main()
{
 unsigned int variant;
 int N;
 double F, delta, x1, x2;
   printf("Enter variant (1 or 2 ): ");
   scanf("%u", &variant);

 while(variant!=1 && variant!=2)
{
  printf("Enter variant (1 or 2 ): ");
  scanf("%u", &variant);
}
 if (variant==1)
 {
        printf("\n\r x1 =");
        scanf("%lf", &x1);
        printf("\n\r x2 =");
        scanf("%lf", &x2);
        printf("\n\r (N>0) N =");
        scanf("%u", &N);

        while(N < 1)
        {
            printf("\n\r (N>0) N =");
            scanf("%u", &N);
        }
        delta =(x2-x1) / (N-1);
        system("cls");
        printf("\n\r--------------------------------------\n\r");
        printf("\n\r|    N    |     X     |    F(X)      |\n\r");
        printf("\n\r--------------------------------------\n\r");

           for(int i = 1;i <= N; i++)
        {
               F = (9 * pow(x1, 3) + 1000);
               printf("\n|%4d     |%10.2f |%10.2f    |", i, x1, F);
               printf("\n\r--------------------------------------\n\r");
               x1 += delta;


               if(i % 12 == 0)
               {
                  printf("Press any key\n\r");
                  getch();
               }
        }
 }
 else
  {
        printf("\n\r x1 =");
        scanf("%lf", &x1);
        printf("\n\r x2 =");
        scanf("%lf", &x2);
        printf("\n\r delta =");
        scanf("%lf", &delta);

        while(delta < 1,0)
        {
            printf("\n\r delta =");
            scanf("%lf", &delta);
        }

        int i =1;
        system("cls");
        printf("\n\r--------------------------------------\n\r");
        printf("\n\r|    N    |     X     |    F(X)      |\n\r");
        printf("\n\r--------------------------------------\n\r");

        while(x1 <= x2)
        {
            F = (9 * pow(x1, 3) + 1000);
            printf("\n|%4d     |%10.2f |%10.2f    |", i, x1, F);
            printf("\n\r--------------------------------------\n\r");
            x1 += delta;


            if(i % 12==0)
            {
                printf("Press any key\n\r");
                getch();
            }
            i++;
        }
return 0;
  }
}
