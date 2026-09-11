#include<stdio.h>
int main(){
    int a=10,b=20;
    int sum=a+b;
    int difference=a-b;
    int product=a*b;
    float division=a/b;
    printf("Sum=%d\n", sum);
    printf("Difference=%d\n", difference);
    printf("Product=%d\n", product);
    printf("Division=%.2f\n", division);
    return 0;
}