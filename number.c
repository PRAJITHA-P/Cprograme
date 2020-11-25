#include<stdio.h>
void main()
{
  int num;
  printf("enter a number=");
  scanf("%d",&num);
  if(num==0)
     printf("%d zero",num);
  else if(num<0)
     printf("negative number");
  else
     printf("positive number");
}           
