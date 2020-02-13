#include<stdio.h>
int main()
{
    double x,y,z;
    scanf("%lf %lf %lf",&x,&y,&z);
    double sum=x+y+z;
    double avg=sum/3.0;
    printf("Total marks %lf\n", sum);
    printf("Average %lf\n", avg);
    return 0;
}
