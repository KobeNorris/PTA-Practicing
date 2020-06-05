#include <stdio.h>
#include <string.h>
typedef struct node{
  char name[11];
  char id[11];
  int score;
}student;

int main(int argc, char * argv[])
{
  int num, i;
  char word;
  student max, min, temp;
  
  max.score = -1;			//≥ı ºªØmax∫Õmin 
  min.score = 101;
  memset(&(max.name),0,11);
  memset(&(max.id),0,11);
  memset(&(min.name),0,11);
  memset(&(min.id),0,11);
  
  scanf("%d", &num);
  getchar();
  for(int t = 0; t < num; t++)
  {
  	memset(&(temp.name),0,11);
  	memset(&(temp.id),0,11);
    scanf("%s %s %d", &temp.name, &temp.id, &temp.score);
    getchar();
    if(max.score < temp.score)
   	{
   		strcpy(max.name, temp.name);
   		strcpy(max.id, temp.id);
   		max.score = temp.score;
	}
	if(min.score > temp.score)
   	{
   		strcpy(min.name, temp.name);
   		strcpy(min.id, temp.id);
   		min.score = temp.score;
	}
  }
  printf("%s %s\n%s %s", max.name, max.id, min.name, min.id);
  
  return 0;
}
