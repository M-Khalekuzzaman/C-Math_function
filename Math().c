#include<stdio.h>
int main()
{
    double x = 2.5 ;
    //double value = round(x);
    //double value = trunc(x);
    //double value = ceil(x);
    double value = floor(x);
    printf("The value is : %.2lf\n",value);
    getch();
}
