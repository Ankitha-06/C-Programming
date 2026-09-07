//Wap to implement linear searching.
#include<stdio.h>
int main(){
    int arr[5]={1,23,34,45,56};
    int target,found=0;
    printf("Enter the element to search :");
    scanf("%d",&target);

    for(int i=0;i<5;i++){
        if(arr[i]==target){
            printf("Element found at index : %d\n",i);
            found=1;
            break;
        }
        else{
            printf("Element not found at index : %d\n",i);
        }
    }
    return 0;
}