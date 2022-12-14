#include<stdio.h>
int main()
{
    double a,b,c,discriminant;
    printf("enter a three numbers\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    if(discriminant>0)
    {
        printf("roots are real and distinct");
    }
    else if(discriminant == 0)
    {
        printf("roots are real and equal");
    }
    else if(discriminant<0)
    {
        printf("roots are imaginary");
    }
    return 0;
}