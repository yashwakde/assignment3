#include<stdio.h>
int main()
{
    float cp,sp,profit,loss,percentage;
    printf("enter cost price and selling price");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        printf("profit -%f\n",profit);
        percentage=(profit/cp)*100;
        printf("%f is profit pecentage",percentage);
    }
    else if (cp>sp)
    {
        loss=cp-sp;
        printf("loss is %f\n",loss);
        percentage=(loss/cp)*100;
        printf("%f is loss percentage",percentage);
    }
}