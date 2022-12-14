#include<stdio.h>
int main()
{ 
   int a,b,c;
 printf("enter a numbers \n" );
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c)
 {
  printf("%d is greater number",a);
 }
 else if(b>a && b>c)
 {
  printf("%d is greater number",b);
 }
 else if(c>a && c>b)
 {
   printf("%d is a greater number",c);
 }
 else if(a == b||b == c ||c == a)
 {
  printf("both are equal");
 }
    return 0;
}
