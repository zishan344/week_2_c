#include <stdio.h>
int main()
{
  //problem 1
  /*  int a,b;
   scanf("%d %d",&a,&b);
   if(a>=b){
    printf("Yes\n");
   }else{
    printf("No\n");
   }; */

   //problem 2
   int a,b;
   scanf("%d %d",&a,&b);
   if(a%b==0){
    printf("Multiples\n");
   }else if (b%a==0){
    printf("Multiples\n");
   }else{
    printf("No Multiples\n");
   }
  return 0;
};