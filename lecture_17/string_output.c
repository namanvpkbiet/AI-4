#include<stdio.h>
int main(){
    // char name[20];
    // printf("Enter the input:\n");
    // scanf("%19s",&name);
    // printf("Output is:\n");
    // printf("%s",name);
    // method 1
    // char name[20];
    // printf("Enter the input:\n");
    // scanf("%[^\n]",&name);
    // printf("Output is:\n");
    // printf("%s",name);
    // method 2
    char name[20];
    printf("Enter the input:\n");
    // fgets
    // fgets(jaha store karana hai,uska size,stdin)
    fgets(name,sizeof(name),stdin);
    printf("Output is:\n");
    printf("%s",name);
    return 0;
}