#include <stdio.h>
int main()
{
   long long a,b,c,d;
   scanf("%lld %lld %lld %lld",&a, &b, &c, &d);
   if (!d){
        printf("NO");
   }
  else if(a+b*c==d){
    printf("YES");
   }else if(a+b-c==d){
    printf("YES");
   }else if(a-b+c==d){
    printf("YES");
   }else if(a-b*c==d){
    printf("YES");
   }else if(a*b+c==d){
    printf("YES");
   }else if(a*b-c==d){
    printf("YES");
   }else{
        printf("NO");
   }
    
  return 0;
}