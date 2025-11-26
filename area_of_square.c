#include<stdio.h>
int main()
{
    const float PI=3.14;
    float len,rad;
    float area_of_square;
    float area_of_circle;
    printf("Enter length to find area of square:\n");
    scanf("%f",&len);
    printf("Enter radius to find area of circle:\n");
    scanf("%f",&rad);
    area_of_square=len*len;
    area_of_circle=PI*(rad*rad);
    printf("Area of square is :%.2f\n",area_of_square);
    printf("Area of circle is :%.2f\n",area_of_circle);
    printf("Circumference of circle is %f",2*rad);
}