//Q150: Use pointer to struct to modify and display data using -> operator.

#include<stdio.h>
#include<stdlib.h>
struct student{
    int no;
    char name[100];
    float marks;
};
int main(){
    struct student *s;
    s=(struct student *)malloc(sizeof(struct student));
    if(s==NULL)
    {
        printf("ERROR");
        return 1;
    }
    printf("Enter Roll no.: ");
    scanf("%d",&s->no);
    printf("Enter Name: ");
    scanf("%s",&s->name);
    printf("Enter marks: ");
    scanf("%f",&s->marks);
    printf("STUDENT DETAILS\nRoll No: %d\nName: %s\nMarks: %.2f\n",s->no,s->name,s->marks);
    free(s);
}