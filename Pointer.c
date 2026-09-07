#include<stdio.h>
int main()
{
    int x=15;
    int *P=&x;
    printf("Value of x=%d \n",x);
    printf("Address of x=%p\n",(void*)&x);
    //printf("Value stored in p=%p\n",)
    return 0;
}