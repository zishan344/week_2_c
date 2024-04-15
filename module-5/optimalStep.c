#include <stdio.h>
int calculate_3Step(int distance);
int calculate_2Step(int distance);
int calculate_1Step(int distance); 
int main(void)
{
   int distance;
   int step = 0; 
   scanf("%d", &distance);
   
  //  calculate 3 steps
  int threeStep = calculate_3Step(distance);
   distance = distance - (threeStep * 3);
   step+= threeStep;
  // calculate 2 step
int twoStep= calculate_2Step(distance);
 distance = distance - (twoStep * 2);
  step+= twoStep;
  // calculate 1 step;
  int oneStep= calculate_1Step(distance);
 distance = distance - (oneStep * 1);
  step+= oneStep;
  printf("%d\n", step);  
  return 0;
}

int calculate_3Step(int distance){
  int step=0;
  // printf("%d  \n", distance);
    while (distance >= 3){
    step++;
    distance -= 3;
  };  
 
  return step;
};
  int calculate_2Step(int distance){
   int step = 0;
  //  printf("%d", distance);
   while (distance >= 2){
    distance -= 2;
    step++;
   };
  //  printf("%d", step);

     return step;
};
int calculate_1Step(int distance){
int step = 0;
  while (distance >= 1)
  {
    step++;
    distance -= 1;
  }
  return step;
};  