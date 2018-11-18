#include <stdio.h>
int main()
{
  float score;
  printf("please input your score:\n");
  scanf("%f", &score);
  printf("Your score is:\n");
  int level = (int) score/10;
  printf("%d", level);
  switch (level){
    case 10:
    case 9:
      printf("The grade is A.\n");
      break;
    case 8:
      printf("The grade is B.\n");
      break;
    case 7:
      printf("The grade is C.\n");
      break;
    case 6:
      printf("The grade is D.\n");
      break;
    default:
      printf("The grade is E.\n");
  }

  return 0;

}
