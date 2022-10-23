/* Enter weekday in no and get 
value in words.*/
#include <stdio.h>

int main(){

    int day_no;
    printf("Enter weekday in number:\n");
    scanf("%d",&day_no);

    switch(day_no){
        case 1:
        printf("SUNDAY");
        break;
        case 2:
        printf("MONDAY");
        break;
        case 3:
        printf("TUESDAY");
        break;
        case 4:
        printf("WEDNESDAY");
        break;
        case 5:
        printf("THRUSDAY");
        break;
        case 6:
        printf("FRIDAY");
        break;
        case 7:
        printf("SATURDAY");
        break;
    }
    
    return 0;
}