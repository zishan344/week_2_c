#include <stdio.h>
int main()
{
   int a;
   int b;
   int c;
   scanf("%d", &a);
    b=a/10;
    c= a%10;
    // printf("%d %d", b,c);
    if(c==0){
      printf("YES");
    }
    else if(b % c == 0 || c%b==0){
    printf("YES");
   }else{
    printf("NO");
   }  
  return 0;
}