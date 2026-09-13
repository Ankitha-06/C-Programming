#include<stdio.h>
int main(){
    int temp;
    printf("Enter temperature:");
    scanf("%d",&temp);
    if(temp>=45){
        printf("Very Hot");
    }
    else if(temp>=25&&temp<=39){
        printf("Warm");
    }
    else{
        printf("Cool");
    }
    return 0;
}