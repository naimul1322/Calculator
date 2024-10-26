#include<stdio.h>
int main()
{
    while(1)
    {
        int num;
        double a,b,cal;
        printf(" \n\n*****Welcome to Calculator:******  \n\n");
        printf("1.Addtion for calculator:\n");
        printf("2.substration for calculator:\n");
        printf("3.multipication for calculator:\n");
        printf("4.division for calculator:\n");
        printf("\nEnter your choose: \n");
        scanf("%d",&num);
        printf("\nEnter the two interger number: \n");
        scanf("%lf %lf",&a,&b);


        switch(num)
        {
        case 1:
            cal=a+b;

            printf("\nAddtion is: %.2lf",cal);

            break;
        case 2:

            cal=a-b;
            printf("\nSubtration is: %.2lf",cal);
            break;
        case 3:
            cal=a*b;

            printf("\nMultipication is: %.2lf",cal);

            break;
        case 4:

            cal=a/b;
            printf("\nDivison is: %.2lf",cal);
            break;
        case 5:



        default:
            printf("Invaild");

        }
    }

    getch();

}
