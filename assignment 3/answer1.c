#include<stdio.h>
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x>=0)
    {
        printf("number is positive\n");
    }
      else 
        printf("number is negative\n");
        return 0;
}