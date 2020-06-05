#include<stdio.h>

int main(int argc, char * argv[])
{
  int sum = 0, index = 0, size;
  int list[100] = {}; 
  char word = '0';
  char pinyin[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
  
  while(word != '\n')
  {
    sum += (word - 48);
    scanf("%c", &word);
  }
  //printf("%d\n", sum);
  while(sum != 0)
  {
  	list[index] = sum % 10;
  	//printf("%d\n", list[index]);
  	sum = sum / 10;
  	index++;
  }
  for(size = 99; list[size] == 0; size--)
  ;
  for(;size > 0; size--)
   printf("%s ", pinyin[list[size]]);
  printf("%s", pinyin[list[0]]);
  
  return 0;
}
