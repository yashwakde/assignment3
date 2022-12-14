#include<stdio.h>
int main()
{
 int monthnumber;
 printf("enter a month number\n");
 scanf("%d",&monthnumber);
 if((monthnumber == 1) ||(monthnumber == 3)||(monthnumber ==5) ||(monthnumber == 7)||(monthnumber == 8)||(monthnumber == 10) ||(monthnumber == 12))
  printf("month has 31 days");
  else if(monthnumber == 2)
       {
        printf(" %d is 28/29 days",monthnumber);
       }
        
  else if(monthnumber ==4 ||monthnumber ==6||monthnumber==9||monthnumber==11)
  printf("month has 30 days");
  return 0;
  }



