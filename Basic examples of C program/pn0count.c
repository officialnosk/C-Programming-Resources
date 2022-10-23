// Count the positive negative and 0 entered.
#include <stdio.h>

int main(){
    int num,pcount=0,zcount=0,ncount=0;

    printf("Enter numbers\n");
    for(int i=0; scanf("%d",&num) ;i++){
        if(num==0){
            zcount++;
        }else if(num<0){
            ncount++;
        }else{
            pcount++;
        }
    }

    printf("\nthere were %d -ve number",ncount);
    printf("\nThere were %d +ve number",pcount);
    printf("\nThere were %d zero number",zcount);
    
    return 0;
}