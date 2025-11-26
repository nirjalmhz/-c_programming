#include<stdio.h>
int main(){
    int year;
    printf("\nEnter year to check is it leap or not:");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("\n %d is  a leap year.",year);
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("\n%d is a leap year.",year);
    }
    else
    {
        printf("\n %d is not a leap year.",year);
    }
}