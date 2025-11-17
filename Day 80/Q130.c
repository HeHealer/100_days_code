//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include<stdio.h>
int main(){
    FILE *fp;
    char name[100];
    int no,marks,n,i;
    fp=fopen("info.txt","w");
    if(fp==NULL)
    {
        printf("ERROR");
        return 1;
    }
    printf("Enter no. of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Student %d\n",i+1);
        printf("Enter name: ");
        fgets(name,sizeof(name),stdin);
        printf("Enter roll No.: ");
        scanf("%d",&no);
        printf("Enter marks: ");
        scanf("%d",&marks);
        fprintf(fp,"%s %d %d\n",name,no,marks);
    }
    fclose(fp);
    fp=fopen("info.txt","r");
    if(fp==NULL)
    {
        printf("ERROR");
        return 1;
    }
    while(fscanf(fp,"%s %d %d",name,&no,&marks)==3)
    {
        printf("Name: %s\nRoll No.: %d\nMarks: %d\n",name,no,marks);
    }
    fclose(fp);
}