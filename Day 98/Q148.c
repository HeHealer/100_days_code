//Q148: Take two structs as input and check if they are identical.

#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[100];
    float marks;
};
int identical(struct student s1,struct student s2){
    if(s1.id==s2.id&&strcmp(s1.name,s2.name)==0&&s1.marks==s2.marks)
    {
        return 1;
    }
    return 0;
}
int main(){
    struct student s1,s2;
    printf("Enter student 1 details: \n");
    printf("Enter name: ");
    fgets(s1.name,(sizeof s1.name),stdin);
    printf("Enter Id: ");
    scanf("%d",&s1.id);
    printf("Enter marks: ");
    scanf("%f",&s1.marks);
    printf("Enter student 2 details: \n");
    printf("Enter name: ");
    fgets(s2.name,(sizeof s2.name),stdin);
    printf("Enter Id: ");
    scanf("%d",&s2.id);
    printf("Enter marks: ");
    scanf("%f",&s2.marks);
    if(identical(s1,s2))
    {
        printf("They are Identical");
    }
    else
    {
        printf("They are not Identical");
    }
}
