#include<stdio.h>
 int main()
{
    int x;
    printf("enter a number:\n");
    scanf("%d",&x);
    if(x%7 == 0 && x%3 == 0)
    {
        printf("%d is divisible by 7 and 3",x);
    }
    else
    printf("%d is not divisible by 7 and 3",x);
    return 0;
}