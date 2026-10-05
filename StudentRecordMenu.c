#include<stdio.h>
#include<string.h>
#define MAX 50
struct student{
    char usn[10];
    char name[20];
    char branch[5];
    int sem;
    float cgpa;
};
struct student s[MAX];
int n=0;
void create();
void display();
void insert();
void delete();
void search();
int main(){
    int choice;
    do{
        printf("====Student Record Menu====\n");
        printf("1.Create Records\n");
        printf("2.Display Records\n");
        printf("3.Insert Records\n");
        printf("4.Delete Records\n");
        printf("5.Search by USn\n");
        printf("6.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:create();break;
            case 2:display();break;
            case 3:insert();break;
            case 4:delete();break;
            case 5:search();break;
            case 6:printf("Program ended.\n");
            default:printf("Invalid chpice!\n");
        }
    }while(choice!=6);
    return 0;
}
void create(){
    int i;
    printf("Enter number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Student %d:",i+1);
        printf("USN:");
        scanf("%s",s[i].usn);
        printf("NAME:");
        scanf("%s",s[i].name);
        printf("BRANCH:");
        scanf("%s",s[i].branch);
        printf("SEMESTER:");
        scanf("%d",&s[i].sem);
        printf("CGPA:");
        scanf("%f",&s[i].cgpa);
    }
}
void display(){
    int i;
    printf("USN\tNAME\tBRANCH\tSEMESTER\tCGPA\n");
    for(i=0;i<n;i++){
        printf("%s\t%s\t%s\t%d\t%f\n",s[i].usn,s[i].name,s[i].branch,s[i].sem,s[i].cgpa);
    }
}
void insert(){
    
}