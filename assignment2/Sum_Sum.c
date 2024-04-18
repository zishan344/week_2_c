#include <stdio.h>
int main()
{
  int arrSize;
  int positiveSum=0;
  int negativeSum=0;
  scanf("%d", &arrSize);
  int arr[arrSize];
  for (int i = 0; i < arrSize; i++)
  {
    int arrValue;
    scanf("%d", &arrValue);
    arr[i] = arrValue;
  };
  for (int i = 0; i < arrSize; i++)
  {
    if(arr[i] > 0){
      positiveSum += arr[i];
    }else{
      negativeSum += arr[i];
    }
  }
  printf("%d %d", positiveSum, negativeSum);
  
  return 0;
}