/* Enter and calculate if the given year is 
a leap year.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;
    printf("Enter the Year\n");
    scanf("%d",&year);
    if((year%100)==0){
        if((year%400)==0){
            printf("It is a leap year");
        }
    }else if((year%4)==0){
        printf("It is a leap year");
    }else{
        printf("It is not a leap year");
    }
    getch();
    return 0;
}