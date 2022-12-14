#include<stdio.h>
int main()
{ int num1,num2;
printf("enter a numbers\n");
scanf("%d%d",&num1,&num2);
if(num1>num2)
{
    printf("%d is greater number",num1);
}
else if(num1<num2)
{
    printf("%d is greater number",num2);

}
else if ( num1 == num2)
printf("%d  %d  both are equal",num1,num2 );
    return 0;
}