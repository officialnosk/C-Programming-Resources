/* left shift results multiplication by 2, right shift results
 division by 2 */
#include <stdio.h>

int main(){
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    int sp=a>>2;
    printf("%d\n",sp);
    sp=sp<<2;
    printf("%d",sp);
    return 0;
}
