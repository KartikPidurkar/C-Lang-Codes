#include<stdio.h>
int main(){
    int hours = 12;
    int minutes = 30;

    const char *meridiem = (hours < 12) ? "AM" : "PM"; // Need to use const function as gcc treats am pm 
    // as strings and *meridiem requires non string value.

    printf("%02d:%02d %s", hours, minutes, meridiem );

    return 0;
    
}