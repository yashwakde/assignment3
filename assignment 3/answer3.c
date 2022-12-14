#include<stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%2 == 0)
    {
        printf(" %d is even number",x);
    }
    else if(x%2 != 0)
       printf("%d is odd number",x);
    return 0;
}