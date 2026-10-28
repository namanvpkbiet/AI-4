#include<stdio.h>
int main(){
    // prime number hai yah nahi
    int n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    _Bool isprime=1;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
    return 0;
}