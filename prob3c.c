//header

#include <stdlib.h>
#include <stdio.h>
//variable dec


//function dec
int *my_malloc(int n_bytes);

//main
void main(void){
    int numOfElements=2;
    int n_bytes;
    //set byte number 
    n_bytes=numOfElements*sizeof(int);
    //run functions
    my_malloc(n_bytes);

    return;
}

int *my_malloc(int n_bytes){
    int *ptr;
    //call malloc
    ptr = (int*)malloc(n_bytes);
    //check for NULL pointer
    if(ptr==NULL){
        printf("ERROR: malloc returned NULL, memory not allocated.");
        exit(0);
    }
    printf("Memory successfully allocated");
    return ptr;
}