/* Author: Alomgir
Id: 2022-1-60-125, 24/2/2022*/

#include <stdio.h>

int main(void)
{
    int GS1,group,pub_code,item,c_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&GS1,&group,&pub_code,&item,&c_digit);

    printf("GS1 prefix: %d\n",GS1);
    printf("Group identifier: %d\n",group);
    printf("Publisher code: %d\n",pub_code);
    printf("Item number: %d\n",item);
    printf("Check digit: %d\n",c_digit);
    return 0;
}
