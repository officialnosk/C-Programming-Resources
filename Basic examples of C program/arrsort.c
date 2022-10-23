/* Array Sort:- each time the loop runs the least precedence
number is sent to last and when second loop runs the 
second least precedence number is sent to second last 
and so on...  . */
#include <stdio.h>
#define max_size 8

int main(){
    int arr[max_size]={1,2,3,4,5,6,7,8};

    for(int i=0;i<max_size-1;i++){
        for(int j=0;j<max_size-1-i;j++){
            if(arr[j]<arr[j+1]){ // change "<" to accesending sort.
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }

    for(int k=0;k<max_size;k++){
        printf("%d\n",arr[k]);
    }


    return 0;
}