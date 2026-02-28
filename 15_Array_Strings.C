#include<stdio.h>
int main(){
//  Array of Strings
char  Fruit[][15] = {"Apple","Banana","Orange","Pomengranate","pineapple"};

int size = sizeof(Fruit)/sizeof(Fruit[0]);  // use indexing for array
Fruit[0][0] = 'e';
Fruit[0][4] = 'A';



for(int i=0;i<size;i++){
    printf("%s\n",Fruit[i]);
}



    return 0;
}