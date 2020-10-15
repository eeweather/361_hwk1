//headers
#include <stdio.h>
#include <stdbool.h>
#include <float.h>

//variable declarations



//function declarations
int *find_largest(int a[], int n);

//main
void main(void)
{
    //test array
    int a[6]={1,2,3,8,5,6};
    int n=6;
    //test function
    printf("largest %d",*find_largest(a,n));
    return;
}

int *find_largest(int a[], int n){
    int largest=0;
    int largestAddress;
    //cycle through array looking for largest, save address of largest
    for(int i=0; i<n;i++){
        if(a[i]>largest){
            largest=a[i];
            largestAddress=&a[i];
        }
    }
    return largestAddress;
}
