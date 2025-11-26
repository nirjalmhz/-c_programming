#include<stdio.h>
int main()
{
    int a=1,b=2;
    int c;
    printf("Before swapping a=%d and b=%d\n",a,b);
    c=b;
    b=a;
    a=c;
    printf("after swapping a=%d and b=%d",a,b);

}