#include<stdio.h>
int main(){
    // declaration of 2d array
    // datatype 2d_array_name[row_size][column_size]
    int arr[3][3];
    // input lena
    // pehle har row me jaake harke element print karenge
    // pehle row ka loop chalega phir column ka loop
    printf("Enter the numbers:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // ouput 
    // same as input pehle row then column ka loop
    printf("The output is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}