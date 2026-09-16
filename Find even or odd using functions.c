//Find even or odd using functions.
#include<stdio.h>
int fun(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    fun(num);
    if(fun(num)){
        printf("Even");
    }
    else{
        printf("ODD");
    }
}