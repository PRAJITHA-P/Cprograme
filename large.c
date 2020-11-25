#include<stdio.h>
void main()
{ 
   int a,b;
   printf("enter 2 numbers=");
   scanf("%d%d",&a,&b);
   if(a==b)
   {
     printf("both are same");
   }
   else if(a>b)
   {
     printf("%d is larger",a);
    }  
   else
   printf("%d is larger",b);
 }  
 
