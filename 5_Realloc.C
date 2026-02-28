#include<stdio.h>
#include<stdlib.h>
//Realloc() = Reallocation,resize previously memory realloc(ptr,bytes)
int main(){

    int number = 0;
    printf("Enter the number of prices:");
    scanf("%d",&number);

    float *prices =(float*) malloc(number * sizeof(float));

    if(prices == NULL){
        printf("memory allocation failed!\n");
        return 1;
    }
    for(int i = 0;i<number;i++){
        printf("Enter price #%d: ",i+1);
        scanf("%f",&prices[i]);
    }
    for(int i = 0;i<number;i++){
        printf("$%.2f\n",prices[i]);
        
    }
    free(prices);
    prices = NULL;

    return 0;
}