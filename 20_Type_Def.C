#include<stdio.h>
typedef int Number;
//typedef char string[50];
typedef char intials[3];
//typedef char* string; -- if you know pointers you can use them so dont have to 
//provide size to the array or string
int main(){
/*
 Number x = 3;
 Number y = 3;
 Number z=x+y;
 printf("%d",z);
*/
//string name = "Bro code";
intials user1 = "KP";
intials user2 = "MG";
intials user3 = "NN";
intials user4 = "NR";

printf("%s\n",user1);
printf("%s\n",user2);
printf("%s\n",user3);
printf("%s\n",user4);

    return 0;
}






// Typedef = reserved keyword that gives an existing datatype a "nickname"
// Helps simplify complex types and improves code readability
// Typedef existing_type  new_name;