#include<stdio.h>
int main(){
    int num;
    printf("\n Enter a number:");
    scanf("%d",&num);
    if(num==0){
        printf("\n Its zero.");
    
    }
    else if(num%2==0){
        printf("%d is even",&num);
    }
    else{
    printf("\n %d is odd",&num);
    printf("%d",num);
    }
}