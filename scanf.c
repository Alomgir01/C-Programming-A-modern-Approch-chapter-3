 /*Prints int and float values in various formats  1/2 2/3 */
#include<stdio.h>
int main(void)
{
    int num1,denom1,num2,denom2,denom,nomin,profit
;

    printf(" Enter first fraction: ");
    scanf("%d/%d",&num1,&denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d",&num2,&denom2);

    denom=(denom1*denom2);
    num1= denom/num1;
    num2=denom/num2;
    nomin=num1+num2;

     printf("The sum is %d/%d\n\n\n\n\n",nomin,denom);


     printf("(2)\n ff: %d%%",profit);

    return 0;
}
