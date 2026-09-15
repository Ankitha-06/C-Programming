#include<stdio.h>
int main(){
    int month;
    printf("Enter the month : ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("January");
        break;

        case 2:
        printf("Febrvary");
        break;

        case 3:
        printf("March");
        break;

        case 4:
        printf("April");
        break;

        case 5:
        printf("May");
        break;

        case 6:
        printf("June");
        break;

        case 7:
        printf("July");
        break;
        case 8:
        printf("August❤️");
        break;
        default :
        printf("Invalid month");
    }
    return 0;
}