#include <stdio.h>

void print_max(int map[], int N, int max);
int find_max(int map[], int N);
int main(int argc, char * argv[])
{
	int N, M, max, num;
	
	scanf("%d%d", &N, &M);
	int map[N];
	for(int t = 0; t < N; t++)
		map[t] = 0;
	for(int i = 0; i < M; i++)
	{
		for(int j = 0; j < N; j++)
		{
			scanf("%d", &num);
			map[j] = map[j] + num;
		}
	}
	max = find_max(map, N);
	printf("%d\n", max);
	print_max(map, N, max);
	
	
	return 0;
}

int find_max(int map[], int N)
{
	int max = 0;
	
	for(int i = 0; i < N; i++)
	{
		if(map[i] > max)
			max = map[i];
	}
	
	return max;
}

void print_max(int map[], int N, int max)
{
	int flag = 0;
	
	for(int i = 0; i < N; i++)
	{
		if(map[i] == max)
		{
			if(flag == 0)
			{
				printf("%d", i + 1);
				flag++;
			}
			else
				printf(" %d", i + 1);
		}
	}
}
