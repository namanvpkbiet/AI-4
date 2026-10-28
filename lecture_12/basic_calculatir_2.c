#include<Stdio.h>
int main(){
    // Basic Calculator Method 2
    printf("Enter the two numbers:\n");
    int a,b;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    printf("For addition choose +\n");
    printf("For subtraction choose -\n");
    printf("For multiplication choose *\n");
    printf("For division choose /\n");
    printf("Enter your choise:\n");
    char c;
    scanf(" %c",&c);
    switch(c){
        case '+':
            printf("Addition: %d\n",a+b);
            break;
        case '-':
            printf("Subtraction: %d\n",a-b);
            break;
        case '*':
            printf("Multiplication: %d\n",a*b);
            break;
        case '/':
            printf("Division: %d\n",a/b);
            break;
        default:
            printf("Please select the above options\n");
    }
    return 0;
}