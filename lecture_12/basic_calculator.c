#include<Stdio.h>
int main(){
    // Basic Calculator Method 1
    printf("Enter the two numbers:\n");
    int a,b;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    printf("For addition choose 1\n");
    printf("For subtraction choose 2\n");
    printf("For multiplication choose 3\n");
    printf("For division choose 4\n");
    printf("Enter your choise:\n");
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("Addition: %d\n",a+b);
            break;
        case 2:
            printf("Subtraction: %d\n",a-b);
            break;
        case 3:
            printf("Multiplication: %d\n",a*b);
            break;
        case 4:
            printf("Division: %d\n",a/b);
            break;
        default:
            printf("Please select the above options\n");
    }
    return 0;
}