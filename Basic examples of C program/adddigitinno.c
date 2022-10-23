/* Add digit in a number and print
eg: 1234= 1+2+3+4=10*/
#include <stdio.h>

int main(){
    int i=1234,d,m=0;

    for(int j=0;j<5;j++){
        d=i%10;//gives the last number.
        i=i/10;//removes the last number.
        m=m+d;// add numbers.
    }
    printf("this is the addition %d\n",m);
}