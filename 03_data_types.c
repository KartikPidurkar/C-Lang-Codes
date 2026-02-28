#include <stdio.h>
int main(){
    double pi =3.1415926535897932;
    printf("The value of pi is %lf\n",pi); // The output will the display the default value in vs code upto 6 
    // digits after decimal if you want more do this "%.digitslf"
    printf("The value of pi upto 15 digits is %.15lf\n",pi);

    char grade = 'A'; // stores alphabets single quotes are required for the words ' '
    printf("Your grade is %c\n",grade);

    // C doesn't have strings so we use array of character to store more than 1 alphabets 
    char name[]= "Doing C Lang Again";
    printf("Daily Reminder %s\n",name); //  %s is used as a format specifier for array of character 
    char email[]= "kartikpidurkar@gmail.com";
    printf("Your Mail is %s\n",email);


    return 0;
}