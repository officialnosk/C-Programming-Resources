//Reverse a array
#include <stdio.h>

int main(){
    printf("Enter size of array you want to reverse\n");
    int n;
    scanf("%d",&n);
    int arr[n],rev[n];

    for(int i=0 ; i<n ; i++){
        printf("Enter %d th number\n",i);
        scanf("%d",&arr[i]);
        fflush(stdin);
    }

    for(int j=0 ; j<n ; j++){
        rev[j]=arr[n-1-j]; //write notes
    }
    
    for(int k=0; k<n ;k++){ 
        printf("%d ",rev[k]);
    }
    
    return 0;
}