#include<stdio.h>
int main(){
    int num;
    printf("\n Enter a number:");
    scanf("%d",&num);
    if(num==0)
    {
        printf("The given number is zero.");
    
    }
    else if(num>0){
        printf("%d is positive.",num);
    }
    else
    printf("%d is negative.",num);}