#include<stdio.h>
#include<ctype.h> // for upper case functions
int main(){
    char dayofweek = '\0'; // Null Terminator
    printf("Enter a day of week (M,T,W,R,F,S) :");
    scanf("%c",&dayofweek);
    dayofweek = toupper(dayofweek); // Forcefully converts letter into uppercase 
    
    switch(dayofweek)
    {
    case 'M':
        printf("It is monday");
        break;
    case 'T':
        printf("It is tuesday");
        break;
    case 'W':
        printf("It is wednesday");
        break;
    case 'R':
        printf("It is Thursday");
        break;
    case 'F':
        printf("It is friday");
        break;
    case 'S':
        printf("It is saturday");
        break;
    default:
        printf("Enter from M to S");
    
    }
    return 0;
} 