#include <stdio.h>
int main()
{
   int a,b;
   int result;
   scanf("%d %d",&a,&b);
   result = a-b;
   if(result > 0){
    printf("%d",result);
   }else{
    printf("%d",0);
   }
  return 0;
}