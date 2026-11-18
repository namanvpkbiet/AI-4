#include<stdio.h>
int main(){
    char str[]="abcdef";
    // length
    int l=0;
    while(str[l]!='\0'){
        l++;
    }
    printf("The length is: %d\n",l);
    // reverse 
    printf("The reverse string is: ");
    for(int i=l-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
    // copy
    char copy[l];
    for(int i=0;i<=l;i++){
        copy[i]=str[i];
    }
    printf("The copy string is: %s\n",copy);
    // concatenate
    char str1[]="Hello";
    char str2[]="World";
    int a=0;
    while(str1[a]!='\0'){
        a++;
    }
    int b=0;
    while(str2[b]!='\0'){
        b++;
    }
    char con[a+b+1];
    int j=0;
    for(int i=0;i<a;i++){
        con[j]=str1[i];
        j++;
    }
    for(int i=0;i<b;i++){
        con[j]=str2[i];
        j++;
    }
    con[j]='\0';
    printf("The concatenated string is: %s\n",con);
    return 0;

}