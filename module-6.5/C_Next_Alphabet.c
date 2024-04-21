#include <stdio.h>
int main()
{
  char c;
  char new;
  scanf("%c", &c);
  if (c>=97 && c < 122)
  {
     printf("%c", c+1);
  }else{
    printf("%c", 122-25);
  }
  
  
  return 0;
}