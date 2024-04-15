#include <stdio.h>
int main()
{
   int a; 
   int n;
   int max = 0;
   scanf("%d",&a);
   for(int i=0;i<a;i++){
    scanf("%d",&n);
      if(max < n){
    max = n;
    }  
   }
    printf("%d",max);

  return 0;
}