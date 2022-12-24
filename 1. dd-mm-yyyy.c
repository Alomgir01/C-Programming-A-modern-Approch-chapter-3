/*write a program that accepts a date from the user in the form mm/dd/yyyy and displays it in the form yyymmdd
 Author: Alomgir ,
ID: 2022-1-60-125
date: 24/2/2022*/


#include <stdio.h>

int main(void)
{
    int m,d,y;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&m,&d,&y);

    printf("You entered the date %d%.2d%.2d \n\n",y,m,d);

    getch();
}
