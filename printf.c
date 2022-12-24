#include<stdio.h>
int main(void)
{
    printf("(1) \n");
    int i,j;
    float x,y;
    i=10;
    j=20;
    x=43.2892f;
    y=5527.0f;

    printf("i=%d,j=%d,x=%f,y=%f\n\n\n\n\n",i,j,x,y);

    printf("(2)\n");

    {
        int i;
        float x;
        i=40;
        x=839.21f;
        printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i); //|%d| means valuw of i, |%5d| means 5 spaces to left and output(i) in right algine,
        //|%-5d| left algine, |%5.4d| means total 4 digit

        printf("|%10.3f|%10.3g|%-10g|\n\n\n\n",x,x,x);//|%10.3f= |       839.210|     8.
    }

    printf("(3)\n");
    {
        printf("\"Item\tUnit\tPrice\tDate\" \n \t     \a  \"Alomgir\"      \\hhhh\\   /   \n\n\n\n\n\n");
    }
    return 0;
}
