// Average of 3 numbers.
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    float average;
    //printf("Enter the number of n1,n2,n3:");
    //scanf("%d %d %d ",&n1,&n2,&n3);
    printf("Enter n1:");
    scanf("%d",&n1);
    printf("Enter n2:");
    scanf("%d",&n2);
    printf("Enter n3:");
    scanf("%d",&n3);
    average=(n1+n2+n3)/3.0;
    printf("Average : %f",average);
    return 0;
}