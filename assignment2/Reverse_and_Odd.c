#include <stdio.h>
int main()
{
   int arrSize;
   scanf("%d", &arrSize);
   int arr[arrSize];
   for (int i = 0; i <arrSize; i++)
   {
    int arrValue;
    scanf("%d", &arrValue);
    arr[i]=arrValue;
   };
   
   for (int i = arrSize-1; i >= 0; i--)
   {
    if(i%2!=0) printf("%d ", arr[i]);
   };
   
   
  return 0;
}