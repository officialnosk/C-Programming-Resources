// Check if a entered number is prime or not.
#include <stdio.h>

int main(){
    int i;
    printf("Enter the no you want to check is prime\n");
    scanf("%d",&i);
    int p=1;
    

    for(int j=2; j<i ; j++){
        if((i % j)==0){
            p=0;
        }
    }
    if(p==0){
        printf("not prime");
    }
    else{
        printf("prime");
    }
}