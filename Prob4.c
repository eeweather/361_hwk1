//headers

#include <stdio.h>
#include <math.h>
//variable declarations
typedef struct bills
{
    int num20s;
    int num10s;
    int num5s;
    int num1s;
} bills_needed;

//function declarations
int numberOf20s(int Total);
int numberOf10s(int Total);
int numberOf5s(int Total);
int numberOf1s(int Total);
bills_needed billsNeeded(int Total);

//main
void main(void)
{
    int totalValue;
    printf("Please enter your U.S. dollar amount, with no symbols.\n");
    scanf("%d",&totalValue);
    bills_needed smallestBills;
    smallestBills=billsNeeded(totalValue);
    printf("%d twenties,%d ten's,%d five's,%d one's\n",smallestBills.num20s,smallestBills.num10s,smallestBills.num5s,smallestBills.num1s);
    return;
}

//functions

bills_needed billsNeeded(int Total){
    bills_needed smallestBills;
    smallestBills.num20s=numberOf20s(Total);
    smallestBills.num10s=numberOf10s(Total-(20*smallestBills.num20s));
    smallestBills.num5s=numberOf5s(Total-(20*smallestBills.num20s)-(10*smallestBills.num10s));
    smallestBills.num1s=numberOf1s(Total-(20*smallestBills.num20s)-(10*smallestBills.num10s)-(5*smallestBills.num5s));
    return smallestBills;
}

int numberOf20s(int Total)
{
    int num20s;

    for (num20s = 0; Total >= 20; num20s++){
        Total=Total-20;
    }

    return num20s;
}

int numberOf10s(int Total)
{
    int num10s;

    for (num10s = 0; Total >= 10; num10s++){
        Total=Total-10;
    }

    return num10s;
}

int numberOf5s(int Total)
{
    int num5s;

    for (num5s = 0; Total >= 5; num5s++){
        Total=Total-5;
    }

    return num5s;
}

int numberOf1s(int Total)
{
    int num1s;

    for (num1s = 0; Total >= 1; num1s++){
        Total=Total-1;
    }

    return num1s;
}