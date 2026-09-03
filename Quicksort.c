#include<stdio.h>
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    int j,temp;
    for(j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}
void quick_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int p=partition(arr,low,high);
        quick_sort(arr,low,p-1);
        quick_sort(arr,p+1,high);
    }
}
int main()
{
    int arr[]={20,9,5,86,3};
    int i;
    int n=5;
    quick_sort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}