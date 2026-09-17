#include<stdio.h>
int main(){
    int m1=30,m2=40,m3=56,m4=69,m5=79;
    int total=m1+m2+m3+m4+m5;
    if(total>=90){
        printf("Grade A");
    }
    else if (total>=80 && total<=89)
    {
        printf("Grade B");
    }
    else if (total>=60 && total<=79)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}