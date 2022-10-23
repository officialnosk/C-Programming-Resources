//string reverse function.
#include <stdio.h>

char *revstring(char *str){
    int i;
    for( i=0;str[i]!=0;i++){
    }
    for(int j=0;j<=i/2;j++){
        char temp=str[j];
        str[j]=str[i-1-j];
        str[i-1-j]=temp;
    }
    return str;
}

int main(){
    // string reverse function.
    printf("Enter a string:\n");
    char *str;
    scanf("%s",str);
    str=revstring(str);
    printf("%s",str);

    return 0;
}