#include<stdio.h>
int main(){
    int Area_sqr,Area_rect,a;
    int a1,b;
    printf("Enter the value for square :");
    scanf("%d",&a);
    Area_sqr=a*a;
    printf("Area of the square:%d\n",Area_sqr);

    printf("Enter the value for rectangle :");
    scanf("%d %d",&a1,&b);
    Area_rect=a1*b;
    printf("Area of the rectangle : %d",Area_rect);
    return 0;
}