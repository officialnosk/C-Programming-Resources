/* Matrix multiply.
The columns  of first matrix must be equal to 
the row of the second matrix.
To make this program we make a i variable to
loop to go up to down on row of first matrix,
j variable to to to side to side on the column
 of the second matrix and a k variable to 
go through one by one on rows or columns. */
#include <stdio.h>
#include <stdlib.h>
#define Max_column 10
#define Max_row 10

void matrix_multiply(
    int mat1[Max_column][Max_row],int mat2[Max_column][Max_row],
    int r1,int c1,int r2,int c2,
    int matrix_multiply[Max_column][Max_row]){

        if(c1!=r2){
        printf("Matrix Multiplication not possible.\n");
        printf("Press any key to exit. ");
        fflush(stdin);
        getchar();
        exit(0);
        }

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                int sum=0;
                for(int k=0;k<c1;k++){
                    sum+=mat1[i][k]*mat2[k][j];
                }
                matrix_multiply[i][j]=sum;
            }
        }

}


int main(){
    int row1,col1,row2,col2;
    int mat[Max_column][Max_row],mat1[Max_column][Max_row];
    printf("first matrix rows and columns?\n");
    printf("1:Rows : ");
    scanf("%d",&row1);
    printf("1:Columns: ");
    scanf("%d",&col1);

    printf("\nSecond matrix rows and columns?\n");
    printf("2:Rows : ");
    scanf("%d",&row2);
    printf("2:Columns: ");
    scanf("%d",&col2);

    printf("Enter the matrix 1:\n");
    for(int x=0;x<row1;x++){
        for(int y=0;y<col1;y++){
            scanf("%d",&mat[x][y]);
        }
    }
    printf("Enter the matris 2:\n");
    for(int x=0;x<row2;x++){
        for(int y=0;y<col2;y++){
            scanf("%d",&mat1[x][y]);
        }
    }

    int mat_multiply[Max_column][Max_row];
    matrix_multiply(mat,mat1,row1,col1,row2,col2,mat_multiply);

    
    for(int l=0;l<row1;l++){
        for(int a=0;a<col2;a++){
            printf("%d\t",mat_multiply[l][a]);
        }
        printf("\n");
    }
    
    return 0;
}