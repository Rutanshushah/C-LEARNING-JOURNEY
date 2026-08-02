#include<stdio.h>
int main (){
    int username , password;
    //correct username and password
    int correctUsername=1111;
    int correctPassword=7777;

    //input
    printf("ENTER USERNAME:");
    scanf("%d",&username);
    printf("ENTER PASSWORD:");
    scanf("%d",&password);
    //check credentials
    if (username==correctUsername && password==correctPassword) {
        printf("Login sucessfully,You Are Entered Successfully.");
    } else {
        printf("invalid credentials.");
    }

    return 0;
}
