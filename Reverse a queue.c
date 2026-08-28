//Reverse a queue
#include<stdio.h>
#define MAX 100
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
void reverseQueue()
{
    int i,j;
    i=front;
    j=rear;
    while(i<j)
    {
      int   temp=queue[i];
        queue[i]=queue[j];
        queue[j]=temp;
        i++;
        j--;
    }
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}
int main()
{
    int n,i,value;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter queue elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        enqueue(value);
    }
    printf("Original Queue:");
    display();
    reverseQueue();
    printf("Reversed Queue:");
    display();
    return 0;
}