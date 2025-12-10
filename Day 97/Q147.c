//Q147: Store employee data in a binary file using fwrite() and read using fread().

#include<stdio.h>
#include<stdlib.h>
struct student{
    int no;
    char name[100];
    float marks;
};
int main(){
    struct student s,sread;
    FILE *fp;
    printf("Enter Roll no.: ");
    scanf("%d",&s.no);
    printf("Enter Name: ");
    scanf("%s",&s.name);
    printf("Enter marks: ");
    scanf("%f",&s.marks);
    fp=fopen("student.txt","wb");
    if(fp==NULL)
    {
        printf("ERROR");
        return 1;
    }
    fwrite(&s,sizeof(struct student),1,fp);
    fclose(fp);
    fp=fopen("student.txt","rb");
    if(fp==NULL)
    {
        printf("ERROR");
        return 1;
    }
    fread(&s,sizeof(struct student),1,fp);
    fclose(fp);
    printf("STUDENT DETAILS\nRoll No: %d\nName: %s\nMarks: %.2f\n",sread.no,sread.name,sread.marks);
    }