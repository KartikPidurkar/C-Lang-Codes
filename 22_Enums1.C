#include<stdio.h>
typedef enum  {
    SUCCESS , FAILURE ,PENDING
}Status;
void connectStatus(Status status);
int main(){
    Status status = PENDING;
    connectStatus(status);

    return 0;
}
void connectStatus(Status status){
    switch(status){
        case SUCCESS:
            printf("connection  was successfull\n");  
            break;
        case FAILURE:
            printf("couldn't connect");
            break;
        case PENDING:
            printf("Connecting.......\n");
            break;
    }
}