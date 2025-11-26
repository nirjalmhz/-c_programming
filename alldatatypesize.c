#include<stdio.h>
int main(){
    int num=10;
    char alpha='a';
    double two=2343;
    float decimal=1.3;
    printf("The size of integer is %lu byte.\n",sizeof(num));
    printf("The size of char is %lu byte.\n",sizeof(char));
    printf("The size of double is %lu byte.\n",sizeof(double));
    printf("The size of float is %lu byte.\n",sizeof(float));
}