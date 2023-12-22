#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
int month;
int day;
int year;
/* ------- first test case ----------------*/
month = 4;
day = 01;
year = 1997;

printf("Date: %02d/%02d/%04d\n", month, day, year);

day = convert_day(month, day);

print_remaining_days(month, day, year);
printf("------------------------\n");
/* ------- second test case ----------------*/
month = 2;
day = 29;
year = 2000;

printf("Date: %02d/%02d/%04d\n", month, day, year);

day = convert_day(month, day);

print_remaining_days(month, day, year);
printf("------------------------\n");
/* ------- third test case ----------------*/
month = 2;
day = 29;
year = 2021;

printf("Date: %02d/%02d/%04d\n", month, day, year);

day = convert_day(month, day);

print_remaining_days(month, day, year);
printf("------------------------\n");
/* ------- forth test case ----------------*/
month = 2;
day = 29;
year = 2100;

printf("Date: %02d/%02d/%04d\n", month, day, year);

day = convert_day(month, day);

print_remaining_days(month, day, year);

printf("------------------------\n");
/* ------- fifth test case ----------------*/
month = 3;
day = 29;
year = 2400;

printf("Date: %02d/%02d/%04d\n", month, day, year);

day = convert_day(month, day);

print_remaining_days(month, day, year);

return (0);
}
