/* bitwise odd even check. &ing gives 1 for odd. */
#include <stdio.h>
int main(){
    printf("Enter the number you want to check:=\n");
    int num;
    scanf("%d",&num);
    if(num&1){
        printf("The number entered is odd.");
    }
    else{
        printf("The number entered is even");
    }

    return 0;
}