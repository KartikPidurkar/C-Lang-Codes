#include<stdio.h>
// Array of Struct = Array where  each element  conatins a struct() helps organize and groups 
// together related data

typedef struct{
    char model[25];
    int year;
    int price;    
}car ;
int main(){

    car cars[] = {{"BMW-M4",2024,35000},
                  {"Camry",2019,6000},
                  {"AMG",2023,250000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0;i<number;i++){
        printf("%s %d %d\n",cars[i].model,cars[i].year,cars[i].price);
    }


    return 0;
}