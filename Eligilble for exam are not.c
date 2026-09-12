#include<stdio.h>
int main(){
    int marks,attendance;
    printf("Enter the marks :");
    scanf("%d",&marks);
    printf("Enter your attendance :");
    scanf("%d",&attendance);
    if(marks>=40)
    {
        if(attendance>=75){
            printf("PASS");
        }
        else{
            printf("Not Eligilble");
        }

    }
    else{
        printf("FAIL");
    }
return 0;
}