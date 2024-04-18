#include <stdio.h>
int main()
{
   int arrSize;
   int index;
   int newValue;
   scanf("%d", &arrSize);
   int arr[arrSize];
   for (int i = 0; i < arrSize; i++)
   {
    int arrValue;
    scanf("%d", &arrValue);
    arr[i] = arrValue;
   }
   scanf("%d %d", &index, &newValue);

   arr[index]=newValue;
   for (int i = arrSize-1; i>=0; i--)
   {
    printf("%d", arr[i]);
   };
   
   
  return 0;
}