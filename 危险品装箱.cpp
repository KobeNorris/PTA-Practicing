#include <stdio.h>

int search(int * number, int n, int size, int j);
int main(void)
{
	int N, M, size, flag;
	scanf("%d %d", &N, &M);
	int num_list[N][2];
	for(int t = 0; t < N; t++)
		scanf("%d %d", &num_list[t][0], &num_list[t][1]);
	for(int t = 0; t < M; t++)
	{
		flag = 0;
		scanf("%d", &size);
		int number[size];
		for(int i = 0; i < size; i++)
			scanf("%d", &number[i]);
		for(int i = 0; i < size; i++)
		{
			for(int j = 0; j < N; j++)
			{
				if(number[i] == num_list[j][0])
				{
					if(search(number, num_list[j][1], size, j))
					{
						printf("No\n");
						flag = 1;
						break;
					}
				}
				else if (number[i] == num_list[j][1])
				{
					if(search(number, num_list[j][0], size, j))
					{
						printf("No\n");
						flag = 1;
						break;
					}
				}
			}
			if(flag == 1)
				break;
		}
		if(flag == 0)
			printf("Yes\n");
	}
	
	return 0;
}

int search(int * number, int n, int size, int j)
{
	for(int t = j; t < size; t++)
		if(number[t] == n)
			return 1;
	
	return 0;
}
