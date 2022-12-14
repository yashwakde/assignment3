#include<stdio.h>
int main()
{ 
    int x;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x&1)
    {
        printf("%d is odd number\n",x);
    }
    else
    printf("%d is even number\n",x);
    return 0;
}