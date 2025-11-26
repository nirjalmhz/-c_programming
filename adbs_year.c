#include<stdio.h>
int main()
{
    int nep_year,eng_year;
    printf("Enter Nepali year to convert it into English year:");
    scanf("%d",&nep_year);
    eng_year=nep_year-57;
    printf("%d BS is %d AD",nep_year,eng_year);

}