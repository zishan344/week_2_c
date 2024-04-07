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
 /*   int a,b;
   scanf("%d %d",&a,&b);
   if(a%b==0){
    printf("Multiples\n");
   }else if (b%a==0){
    printf("Multiples\n");
   }else{
    printf("No Multiples\n");
   } */
   //problem 3
/*    char a;
   scanf("%c",&a);
   if(a >= 'A' && a<='Z'){
    printf("%c",a+32);
   }else{
     printf("%c",a-32);
   } */

//problem 4
/* int number;
   scanf("%d",&number);
   
    while(number >= 10) {
        number /= 10;
    }
    if(number%2==0){
      printf("EVEN");
    }else{
      printf("ODD");
    }
       */
  //problem 5
 /*   char a;
   scanf("%c",&a);
   if(a>=48 && a<=57){
    printf("IS DIGIT");
   }else if(a>=65 && a<=90){
    printf("ALPHA\nIS CAPITAL");
   }else{
    printf("ALPHA\nIS SMALL");

   }; */
   //problem 5
    int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a<=b && a <=c){
     printf("%d",a);
   }else if(b<=c && b <=a){
    printf("%d",b);
   }else{
    printf("%d",c);
   }
     
  if(a>=b && a>=c){
    printf(" %d",a);
  }else if(b>=c && b>=a){
    printf(" %d",b);
  }else{
    printf(" %d",c);
  }
  return 0;
};