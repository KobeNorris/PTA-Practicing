#include<stdio.h>

int main(int argc, char * argv[])
{
  int num, time = 0;
  scanf("%d", &num);
  
  while(num != 1)
  {
    if(num % 2 == 0)
      num = num / 2;
    else
      num = (3 * num + 1) / 2;
    time++;
  }
  printf("%d\n", time);
  
  return 0;
}
