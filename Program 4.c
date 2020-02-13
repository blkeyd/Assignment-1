#include<stdio.h>

int main()
{
    double r;
    scanf("%lf",&r);

    double pi=3.14156;

    double area=pi*r*r;

    double circumference=2.0*pi*r;

    printf("Area = %lf\n",area);
    printf("Circumference = %lf\n",circumference);

    return 0;
}
