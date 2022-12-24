/*write a program  m that ask the user to enter the number form 1 to 16 and then displays the number in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals
Author: Alomgir ,
ID: 2022-1-60-125
date: 24/2/2022*/

#include <stdio.h>
int main(void)
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;
    int r1_sum,r2_sum,r3_sum,r4_sum;
    int c1_sum,c2_sum,c3_sum,c4_sum;
    int d1_sum,d2_sum;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12,&n13,&n14,&n15,&n16);

    printf("%2d %2d %2d %2d\n",n1,n2,n3,n4);
    printf("%2d %2d %2d %2d\n",n5,n6,n7,n8);
    printf("%2d %2d %2d %2d\n",n9,n10,n11,n12);
    printf("%2d %2d %2d %2d\n",n13,n14,n15,n16);

    r1_sum=n1+n2+n3+n4;
    r2_sum=n5+n6+n7+n8;
    r3_sum=n9+n10+n11+n12;
    r4_sum=n13+n14+n15+n16;

    c1_sum=n1+n5+n9+n13;
    c2_sum=n2+n6+n10+n14;
    c3_sum=n3+n7+n11+n15;
    c4_sum=n4+n8+n12+n16;

    d1_sum=n1+n6+n11+n16;
    d2_sum=n13+n10+n7+n4;

    printf("Row sums: %2d %2d %2d %2d\n",r1_sum,r2_sum,r3_sum,r4_sum);
    printf("Column sums: %2d %2d %2d %2d\n",c1_sum,c2_sum,c3_sum,c4_sum);
    printf("Diagonal sums: %2d %2d\n\n", d1_sum,d2_sum);
    return 0;
}
