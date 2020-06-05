#include <stdio.h>
#include <string.h>

int main(int argc, char argv[])
{
	int move, size;
	
	scanf("%d %d", &size, &move);
	getchar();
	int array[size];
	for(int t = 0; t < size; t++)
		array[t] = 0;
	if(move >= size)
		move = move % size;
	for(int t = 0; t < size; t++)
		scanf("%d", &array[t]);
	for(int t = size - move; t < size; t++)
	{
		if(t == size - 1 && move == 0)
			printf("%d", array[t]);
		else
			printf("%d ", array[t]);
	}
	for(int t = 0; t < size - move; t++)
	{
		if(t == size - move - 1)
			printf("%d", array[t]);
		else
			printf("%d ", array[t]);
	}
	
	return 0;
}
