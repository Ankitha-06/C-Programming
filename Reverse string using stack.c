//wap to reverse 
#include<stdio.h>
#define SIZE 100
int main(){
    char str[SIZE];
    char stack[SIZE];
    int top=-1;
    int i;
    printf("Enter a sting:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        top++;
        stack[top]=str[i];
    }
    printf("Reversed string is:");
    while(top!=-1){
        printf("%c",stack[top]);
        top--;
    }
    return 0;
}