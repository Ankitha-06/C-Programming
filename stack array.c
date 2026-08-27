#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;
//push operation
void push(int value)
{
    if(top==SIZE-1){
        printf("Stack overflow.");
    }
    else{
        top++;
        stack[top]=value;
        printf("%d\n",value);
    }
}
//pop operation 
void pop()
{
    if(top==SIZE-1){
        printf("Stack underflow.");
    }
    else{
        top--;
        printf("%d\n",stack[top]);
    }
}
//peek operation
void peek()
{
    if(top==SIZE-1){
        printf("Stack underflow.");       
    }
    else{
        printf("Top element of the stack is:%d\n",stack[top]);
    }
}
void display()
{
    if(top==SIZE-1){
        printf("Stack underflow.");
    }
    else{
        printf("Stack elements are:");
        for(int i=top;i>=0;i--){
            printf("%d\t",stack[i]);
        }
    }
}
int main()
{
    int choice,value;
    while(1){
        printf("\nStack menu -------\n");
        printf("1.Push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                  printf("Enter value:");
                  scanf("%d",&value);
                  push(value);
                  break;
            case 2:
                  pop();
                  break;
            case 3:
                  peek();
                  break;
            case 4:
                  display();
                  break;
            case 5:
                  return 0;
                  default:
                  printf("Invalid choice\n");

        }
    }
    return 0;
}