//vowels in a string, function.
#include <stdio.h>

int count_vowels(char str[]){
    int count = 0;

    for(int i = 0;str[i] != '\0';i++){
        if(
            str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U'){
            count++;
        }
    }
    return count;
}

int main(){
    char string[100];
    printf("Enter the string:\n");
    gets(string);
    printf("There are %d number of vowels in your string.\n", count_vowels(string));

    return 0;
}