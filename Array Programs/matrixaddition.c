#include<stdio.h>
void matrix(int mat[10][10] ,int rows,int column){
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}
void display(int mat[10][10],int rows,int column){
    printf("Matrix formed is:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
void add(int mat1[10][10],int mat2[10][10],int sum[10][10],int rows,int column){
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}
int main()
{
    int m,n;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the order of both the matrices:\n");
    scanf("%d %d",&m,&n);
    printf("First matrix is:\n");
    matrix(a,m,n);
    display(a,m,n);
    printf("Second matrix is:\n");
    matrix(b,m,n);
    display(b,m,n);
    add(a,b,c,m,n);
    display(c,m,n);
    return 0;
}