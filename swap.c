#include<stdio.h>
void main()
{
  int x,y;
  printf("enter 2 numbers x,y=");
  scanf("%d%d",&x,&y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("x=%d\n y=%d",x,y);
}
