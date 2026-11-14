#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    int small=arr[0];
    for(int i=1;i<n;i++){
        // large element
        if(arr[i]>large){
            large=arr[i];
        }
        // small element
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("The largest number is %d\n",large);
    printf("The smallest number is %d\n",small);
    return 0;
}