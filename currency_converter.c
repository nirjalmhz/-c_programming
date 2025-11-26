#include<stdio.h>
int main()
{
    float dollar,npr;
    int option;
    float rate2=133.0;
    printf("Choose following option.");
    printf("\n1.Npr to dollar.");
    printf("\n2.Dollar to npr\n");
    scanf("\n%d",&option);
    switch(option)
    {
        case 1:
        {
            printf("Enter npr to convert into dollar:");
            scanf("%f",&npr);
            dollar=npr/rate2;
            printf("%.2f npr is %.2f dollar",npr,dollar);
        }
        break;
        case 2:
        {
            printf("Enter dollar to convert into npr:");
            scanf("%f",&dollar);
            npr=dollar*rate2;
            printf("%.2f dollar is %.2f npr",dollar,npr);
        }
        break;
        default:
        printf("\n Error");

    }
}