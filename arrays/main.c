#include <stdio.h>


int main(){


  int grades[10];
  int count = 10;
  int sum = 0;
  float average;

  printf("Please enter your grades to compute your average \n");

  for(int i = 0; i < count ; ++ i){
   printf("%2u> ", i+1);
   scanf("%d", &grades[i]);
   sum = sum + grades[i];
  }

  average = (float)sum/count;
  
  printf("Your average is %f", average);
  return 0;
}
