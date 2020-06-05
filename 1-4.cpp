#include<stdio.h>

int main(int argc, char * argv[])
{
  int size, a, b, c;
  char word = '\0';
  
  scanf("%d", &size);
  getchar();
  for(int t = 0; t < size; t++)
  {
    scanf("%c", &word);
    a = 0;
    b = 0;
    c = 0;
    while(word == 'A')
    {
      a++;
      scanf("%c", &word);
    }
    if(word == 'P')
     scanf("%c", &word);
    else
    {
     printf("No\n");
     while(word != '\n')
     	scanf("%c", &word);
     continue;
    }
    while(word == 'A')
    {
      b++;
      scanf("%c", &word);
    }
    if(word == 'T')
     scanf("%c", &word);
    else
    {
     printf("No\n");
     while(word != '\n')
     	scanf("%c", &word);
     continue;
    }
    while(word == 'A')
    {
      c++;
      scanf("%c", &word);
    }
    if((word == '\n') && (c == a * b) && (b >= 1))
     printf("Yes\n");
    else
    {
     printf("No\n");
     while(word != '\n')
     	scanf("%c", &word);
     continue;
    }
  }
  
  return 0;
}
