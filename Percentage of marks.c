#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,m6,total_marks;
    printf("Enter your marks m1,m2,m3,m4,m5,m6:");
    scanf("%d %d %d %d %d %d",&m1,&m2,&m3,&m4,&m5,&m6);
    total_marks=m1+m2+m3+m4+m5+m6;

    float percentage;
    percentage=(total_marks/600.0)*100;
    printf("Percentage = %.2f\n",percentage);

    if(percentage>=90){
        printf("Excellent");
    }
    else if(percentage>=80&&percentage<=89){
        printf("Good");
    }
    else if(percentage>=60&&percentage<=79){
        printf("Average");
    }
    else{
        printf("Low");
    }
    return 0;  
}