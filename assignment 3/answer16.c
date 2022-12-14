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
 if(ch>=33 && ch<=47)
 {
  printf("%c is %d is special character",ch,ch);
 }
 if(ch>=48 && ch<=58)
 {
  printf("%c is %d is a digit number",ch,ch);
 }
  return 0;
}