#include <stdio.h>

int main(){
    int n;
    for(int i=0;i<=5;i++){
        for(int j =0 ;j<=5;j++){
            if((i==0 || i== 5) || (j==0 || j==5)){
                printf("%d",j);
            }else if ((i==1 || i==4) || (j==1 || j==4)){
                printf("%d",i-1);
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}