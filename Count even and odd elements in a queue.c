// Count even and odd elements in a queue.
#include<stdio.h>
#define  MAX 100
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int value)
{
    if(rear==MAX-1)
    {
        printf("Queue is FULL\n");
    }
    else
    {
        if(front==-1)
          front=0;
        rear++;
        queue[rear]=value;
    }
}
int main()
{
    int n,i,value;
    int even=0,odd=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter queue elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        enqueue(value);
    }
    for(i=front;i<=rear;i++)
    {
        if(queue[i]%2==0)
             even++;
        else
             odd++;
    }
    printf("Number of even elements=%d\n",even);
    printf("Number of odd elements=%d",odd);
    return 0;
}