// Variable = a reusable container for a value 
#include <stdio.h>
int main(){
int age = 20;
printf("You are %d years old\n",age); // format specefier int =%d float=%f
int year = 2025;
printf("this is %d\n ",year);
int quantity = 1;
printf("you have ordered %d x items\n",quantity);
float gpa = 8.47;
printf("Your gpa is %f\n",gpa); // you can add %.1f to display limited amount of digits after decimal
printf("Your gpa is %.1f\n",gpa);
float temprature = -10.23;
printf("The temparture is %f°\n",temprature); // degree symbol alt + 0176 °
return 0 ;
}