#include<stdio.h>
int main()
{
    float cel,far;
    int choice;
    printf("\nChoose one of the following option.");
    printf("\n 1.Farenheight to Celcius.");
    printf("\n 2.Celcius to Farenheight.");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("\nEnter temperature in farenheight:");
        scanf("%f",&far);
        cel=(far-32)*5.0/9.0;
        printf("%.2f far is %.2f degree celcius.",far,cel);
        break;
        case 2:
        printf("\nEnter temperature in celcius:");
        scanf("%f",&cel);
        far=(cel*9.0/5.0)+32;
        printf("%.2f degree celcius. is %.2f farenheight.",cel,far);
        break;

    }

}