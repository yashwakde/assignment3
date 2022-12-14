#include<stdio.h>
 int main()
{
 char ch;
 printf("enter a character\n");
 scanf("%c",&ch);
 if(ch>=65 && ch<=90)
 {
  printf("%c is %d is uppercase",ch,ch);
 }
 if(ch>=96 && ch<=122)
 {
  printf("%c is %d is lowercase",ch,ch);
 }
 return 0;
}