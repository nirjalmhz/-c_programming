#include<stdio.h>
#include<math.h>
int main(){
    float A,CI,P,R,T;
    printf("Enter Principal:\n");
    scanf("%f",&P);
    printf("Enter Rate:\n");
    scanf("%f",&R);
    printf("Enter Time:\n");
    scanf("%f",&T);
    A=(P*pow(1+(R/100),T));
    CI=A-P;
    printf("Coumpound interest is:%f",CI);
}