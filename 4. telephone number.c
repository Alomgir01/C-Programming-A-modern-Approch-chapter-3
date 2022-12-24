/*write a program that prompts the user to enter a telephone number in  the form (xxx) xxx-xxxx
and then displays the number in the form xxx.xxx.xxx

Author: Alomgir ,
ID: 2022-1-60-125
date: 24/2/2022*/


#include <stdio.h>
int main(void)
{
    int c1,c2,c3;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d",&c1,&c2,&c3);
    printf("You entered %d.%d.%d\n\n",c1,c2,c3);
    return 0;
}
