#include<stdio.h>
struct persondetails{
    char name[20];
    int age;
    int phone;
    char add[100];
};
int main(){
    struct persondetails p;
    p.age=10;
    printf("%d",p.age);
}