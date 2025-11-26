#include<stdio.h>
int main(){
    int a=10;
    int b=5;
    int c=15;
    int temp;
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("a=%d \n b=%d \n c=%d",a,b,c);
}