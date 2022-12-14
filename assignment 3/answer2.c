#include<stdio.h>
int main()
{ 
    int x;
    printf("enter a number\n ");
    scanf("%d",&x);
    if(x%5 == 0)
    {
        printf("%d is divisible by 5",x);
    }
    else

        printf("%d id not divisible by 5",x);
}