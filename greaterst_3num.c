#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter first number:");
    scanf("%d",&a);
    printf("\nEnter second number:");
    scanf("%d",&b);
    printf("\nEnter third number:");
    scanf("%d",&c);
    if(a>b || a>c)
    {
        printf("%d is gratest number.",a);
    }
    else if(b>a || b>c)
    {
        printf("%d is gratest number.",b);
    }else if(c>b || c>a)
    {
        printf("%d is gratest number.",c);
    }
}
