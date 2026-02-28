#include<stdio.h>
// 2D-Array= An array where each element is an array
// Array[][]= {{},{},{}}
int main(){
    int numbers[][3] = {{1,2,3},    // Need to provide columns numbers that is limit = 3. [row][column]
                        {4,5,6},
                        {7,8,9}};
    
                        
    for(int i = 0; i<3 ; i++){       // rows
        for(int j = 0; j<3 ; j++){  // columns
        printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }




    return 0;
}