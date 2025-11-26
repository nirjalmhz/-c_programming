#include<stdio.h>
int main()
{
    int a=1,b=2,c=3,d;
    d=a;
    a=c;
    c=d;
   
    printf("%d%d%d",a,b,c);
}