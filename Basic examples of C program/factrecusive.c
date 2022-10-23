#include <stdio.h>

int factorial(int num);


int main(){
    int fact = 6;
    /* printf("The number you want to do factorial of?\n");
    scanf("%d",&fact); */
    printf("The factorial of %d is %d", fact, factorial(fact));

    return 0;
}

int factorial(int num){
    if(num == 0){
        return 1;
    } else{
        return num * factorial(num - 1);
    }
}