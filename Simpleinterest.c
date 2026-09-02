#include<stdio.h>
int main(){
    int principal,rate,time,si;
    principal=1000;
    rate=5;
    time=2;
    si=(principal*rate*time)/100;
    printf("Simple Interest=%d",si);
    return 0;
    
}