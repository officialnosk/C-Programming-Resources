//Convert capital to small, or small to capital
#include <stdio.h>

int main(){
    char str[]="Hi there hello there ho there";
    for(int i=0 ; str[i]!='\0' ; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    printf("%s\n",str);
    char str2[]="Nepal College of Information technology";
    for(int j=0 ; str2[j]!='\0' ; j++){
        if(str2[j]>='a' && str2[j]<='z'){
            str2[j]=str2[j]-('a'-'A');
        }
    }
    printf("%s\n",str2);
}