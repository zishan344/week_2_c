#include <stdio.h>
int main()
{
  int correctPass = 1999;
  int pass;
 
    while (scanf("%d", &pass)!= EOF)
   {

    if(correctPass==pass){
      printf("Correct");
      break;
    }else{
      printf("Wrong\n");
    }
   };
   
  return 0;
}