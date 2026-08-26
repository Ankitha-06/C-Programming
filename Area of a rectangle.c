//calculate area of a rectangle.
#include<stdio.h>
int main()
{
    int l,b,rect_area;
    printf("Enter length:");
    scanf("%d",&l);
    printf("Enter breadth:");
    scanf("%d",&b);
    rect_area=l*b;
    printf("Rectangle area=%d",rect_area);
    return 0;
}