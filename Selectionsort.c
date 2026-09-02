#include<stdio.h>
void selection_sort(int arr[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    }
}
int main()
{
    int arr[5]={20,9,65,25,3};
    int i;
    selection_sort(arr,5);
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}