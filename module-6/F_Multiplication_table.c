#include <stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   for (int i = 1; i <= 12; i++)
   {
   printf("%d %s %d %s%d \n", a,"*",i,"= ",a * i);
   }
   
  return 0;
}