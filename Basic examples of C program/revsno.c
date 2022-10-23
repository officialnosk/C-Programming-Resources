/* Reverse a number and check if it is 
equal to previous number. */

#include <stdio.h>

int main(){
    int num,rev=0,dig;
    printf("Enter 5 digit number:"); //12345
    scanf("%5d",&num);
        int temp=num;
        for(int i=0 ; num!=0 ;i++){ 
            dig=num%10;
           num=num/10; 
           rev=rev*10+dig;
        }
        if(temp==rev){
            printf("The number is same\n");
        }else{
            printf("The number is not same\n");
        }
        
        printf("The reverse of %d is %d\n",temp,rev);
}