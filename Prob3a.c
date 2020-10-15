//headers
#include <stdio.h>
#include <stdbool.h>
#include <float.h>

//variable declarations

int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//function declarations
void split_date(int day_of_year, int year, int *month, int *day);
bool isItaLeapYear(int year);

/*Write the following function:
void split_date(int day_of_year, int year, int *month, int *day);
 day_of_year is an integer between 1 and 366, specifying a particular day within the year
designated by the parameter year. month and day point to variables in which the function
will store the equivalent month (1 – 12) and day within the month (1 – 31)
*/

//main
void main(void)
{
    //test values
    int month = 0;
    int day = 0;
    int day_of_year = 215;
    int year = 2001;
    //function call
    split_date(day_of_year, year, &month, &day);
    
    //check function
    printf("%d\n", month);
    printf("%d\n", day);
    return;
}

//functions

void split_date(int day_of_year, int year, int *month, int *day)
{
    int i;
    //if its a leap year change how many days are in feb
    if (isItaLeapYear(year) == true)
    {
        daysInMonths[1] = 29;
    }
    //determine what month it is
    for (i = 0; day_of_year > 0; i++)
    {
        day_of_year = day_of_year - daysInMonths[i];
    }
    *month = i;
    //determine what day it is
    *day = (day_of_year + daysInMonths[i - 1]);
}

bool isItaLeapYear(int year)
{
    //variables
    bool its_a__leap_year;
    float rem4;
    float rem100;
    float rem400;
    //determine remainders
    rem4 = year % 4;
    rem100 = year % 100;
    rem400 = year % 400;

    /*printf("%f\n",rem4);
    printf("%f\n",rem100);
    printf("%f\n",rem400);*/
    
    //determine if its a leap year
    if (year < 1752)
    {
        its_a__leap_year = false;
    }
    else if (rem4 != 0)
    {
        its_a__leap_year = false;
    }
    else if (rem4 == 0 && rem100 != 0)
    {
        its_a__leap_year = true;
    }
    else if (rem4 == 0 && rem100 == 0 && rem400 == 0)
    {
        its_a__leap_year = true;
    }
    else
    {
        its_a__leap_year = false;
    }

    return its_a__leap_year;
}