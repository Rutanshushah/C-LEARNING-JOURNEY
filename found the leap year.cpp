#include <stdio.h>
int main (){
    int year;
    printf ("ENTER THE YEAR IN YYYY:----");
    scanf("%d",&year);
        if (( year%400==0) || (year%4==0 && year%100!=0))
    {
    printf("IT IS LEAP YEAR");
    }
    else
    {
        printf("IT IS NOT A LEAP YEAR");
    }
    return 0;
}

