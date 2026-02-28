#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// Struct = A custom conatiner that holds multiple pieces of related information similar 
// to objects in other languages

 typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFulltime;
}student;

void printstudent(student student);

int main(){
    student student1 = {"Kartik",30,2.5,true};
    student student2 = {"Piyush",20,3.4,false};
    student student3 = {"Sujal",21,2.8,false};
    student student4 = {0};

    strcpy(student4.name ,"Vishal");
    student4.age = 27;
    student4.gpa = 5.8;
    student4.isFulltime = true;

    printstudent(student1);
    printstudent(student2);
    printstudent(student3);
    printstudent(student4);

    return 0;
}
void printstudent(student student){
    printf("%s\n",student.name);
    printf("%d\n",student.age);
    printf("%f\n",student.gpa);
    printf("%s\n",(student.isFulltime) ? "Yes":"No");
    printf("\n");
}