#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  int score[5];
  int a;

  printf("Enter five numbers to find the average : ");
  for(a = 0;a < 5;++a){
    scanf("%d",&score[a]);}
  for(a =0;a < 5;++a){
    printf("score[%d] = %d\n", a,score[a]);
  }

  int total = 0;
  for(a =0;a < 5;++a){
        total = total + score[a];
  }

  int average = total / 5;
  printf("\nAverage :%d\n",average);

return 0;
}
