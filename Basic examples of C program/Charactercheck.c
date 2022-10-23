#include <stdio.h>

int main(){
    printf("Input a chracter to check:\n");
    char chechar;
    scanf("%c",&chechar);
    fflush(stdin);
    if(chechar>='A' && chechar <='Z'){
        printf("Capital lettter");
    }else if(chechar >='a' && chechar <='z'){
        printf("Small letter");
    }else if(chechar>='1' && chechar <='9'){
        printf("Numbers");
    }else{
        printf("Special symbols");
    }
}