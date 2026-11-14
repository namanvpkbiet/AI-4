#include<stdio.h>
int main(){
    int arr_a[3][3];
    int arr_b[3][3];
    // input of first matrix
    printf("Enter the numbersof first matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr_a[i][j]);
        }
    }
    // input of second matrix
    printf("Enter the numbers of second matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr_b[i][j]);
        }
    }
    // addition of two matrix
    int sum[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=arr_a[i][j]+arr_b[i][j];
        }
    }
    // transpose
    int transpose[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[i][j]=arr_a[j][i];
        }
    }
    // multiplication
    int mul[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mul[i][j]=arr_a[i][j]*arr_b[j][i];
        }
    }
    // output of addition
    printf("The addition of two matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    // output of transpose
    printf("The transpose of matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    printf("the multiplication of two matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}

