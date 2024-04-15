#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    //problem 4 
  /*   int x;
    scanf("%d",&x);
    int daughter_age= x/5;
    int father_age = daughter_age * 4;
    printf("%d %d", father_age, daughter_age); */
    // problem 5
 /*    long long n ;
    scanf("%lld", &n);
    long long total = n*(n+1)/2;
    printf("%lld",total); */
    
    //problem 6
    /* int n ;
    int i ;
    int total = 0;
    scanf("%d", &n);
    int value = (n - (5 - 1) * 5 ) / 5;
    //  printf("%d ",value);

     for (i = value ; i <= n ; i++)
    {  
       if (i%2==0){
        if(total == n) break;
        total += i;
        printf("%d ",i);
       };
    };   */
    // printf("%d",total);

    // problem 7
   /*  int n ;
    int i ;
    int total = 0;
    scanf("%d", &n);
    int value = (n - (4 - 1) * 4 ) / 4;
    //  printf("%d ",value);

       for (i = value ; i <= n ; i++)
    {  
       if (i%2==1){
        if(total == n) break;
        total += i;
        printf("%d ",i);
       };
    };    */

    //problem 9
  /*   int n, reverse = 0, remainder ; 
    scanf("%d", &n); 
 
   while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);
   */
  
    return 0;
}
