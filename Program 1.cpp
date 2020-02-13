#include<stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    int div=a/b;

    printf("A+B is = %d\n",sum);
    printf("A-B is = %d\n",sub);
    printf("A*B is = %d\n",mul);
    printf("A/B is = %d\n",div);

    return 0;
}
