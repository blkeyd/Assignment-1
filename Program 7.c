#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double p = b*b - 4.0*a*c;

    if(p<0.0||a==0.0)
        printf("Impossivel calcular\n");
    else
    {
        double r1,r2;

        p = sqrt(p);

        r1 = (-b + p)/(2.0*a);
        r2 = (-b - p)/(2.0*a);

        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);

    }
    return 0;
}
