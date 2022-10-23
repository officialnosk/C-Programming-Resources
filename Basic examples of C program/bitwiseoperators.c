#include <stdio.h>

int main(){
   printf("Enter two numbers:\n");
   int n1,n2;
   scanf("%d %d",&n1,&n2);

   printf("%d & %d = %d\n",n1,n2,n1&n2);
   printf("%d | %d = %d\n",n1,n2,n1|n2);
   printf("~%d = %d\n",n1,(~n1));
   printf("%d ^ %d = %d\n",n1,n2,n1^n2);
   printf("%d >> 1 = %d\n",n1,n1>>1);
   printf("%d << 1 = %d\n",n2,n2<<1); 


    return 0;
}