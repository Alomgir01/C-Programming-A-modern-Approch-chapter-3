/*Write a program that formats product information entered by
   the user. A session with the program should look like this:
       Enter item number: 583
       Enter unit price: 13.5
      Enter purchase date (mm/dd/yyyy): 8/20/2013
     Author: Alomgir ,
ID: 2022-1-60-125
date: 24/2/2022 */


#include <stdio.h>

int main(void)
{
    int item_number,month,day,year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d",&item_number);

    printf("Enter unit price: ");
    scanf("%f",&unit_price);

    printf("Enter purchase date(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("\nItem\tUnit\t\tPurchase\n\tPrice\t\tDate\n");
    printf("%d\t$%2.2f\t\t%.2d/%.2d/%d\n\n",item_number,unit_price,month,day,year);

    return 0;
}
