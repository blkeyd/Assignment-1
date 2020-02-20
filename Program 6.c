#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);
    double S=(A+B+C)/2;
    double v = S*(S-A)*(S-B)*(S-C);
    double Area=sqrt(v);
    printf("Area=%lf\n",Area);

    return 0;

}
