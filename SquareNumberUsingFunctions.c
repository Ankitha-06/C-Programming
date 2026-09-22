#include<stdio.h>
int square(int n){
    return n*n;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sq=square(n);
    printf("Square:%d",sq);
}