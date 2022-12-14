#include<stdio.h>
 int main()
{
 float english,maths,hindi,physics,chemistry,total,percentage;
 printf("enter a subject");
 scanf("%f%f%f%f%f",&english,&maths,&hindi,&physics,&chemistry);
total=english+maths+hindi+physics+chemistry;
printf("%f\n",total);
percentage = (total/500)*100;
printf("%f\n",percentage);
if(percentage>33)

 {
  printf("candidate passed the exam\n");
 }
 else
 {
  printf("candidate failed the exam");
 }
  return 0;
}





