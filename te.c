// Write a program to show the use of pointer in structure 
#include <stdio.h>
#include <string.h>
struct student{
    int rno;
    char name[20];
    int age;
};

int main(){
    struct student s1;
    s1.rno = 101;
    strcpy(s1.name, "<himanshu>");
    s1.age = 20;
    struct student *p = &s1;
    p->age = 21;
    printf("%d\n", p->rno);
    printf("%s\n", p->name);
    printf("%d\n", p->age);
    
    return 0;
}
