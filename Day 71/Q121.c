//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include<stdio.h>
int main(){
    int age;
    char name[100];
    FILE *fp;
    fp=fopen("info.txt","w");
    if(fp==NULL)
    {
        printf("ERROR");
        return 1;
    }
    printf("Enter your Name: ");
    fgets(name,sizeof(name),stdin);
    printf("Enter your age: ");
    scanf("%d",&age);
    fprintf(fp,"Name: %s\nAge: %d",name,age);
    fclose(fp);
}