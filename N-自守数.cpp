#include <stdio.h>

int find_num(int num);
int main(void)
{
	int count, N;
	
	scanf("%d", &count);
	int number[count];
	for(int t = 0; t < count; t++)
		scanf("%d", &number[t]);
	for(int t = 0; t < count; t++)
	{
 		N = find_num(number[t]);
		if(N != 0)
			printf("%d %d\n", N, N * number[t] * number[t]);
		else
			printf("No\n");
	}
	
	return 0;
}

int find_num(int num)
{
	int n = 0, temp = num;
	
	while(temp > 0)
	{
		temp = temp / 10;
		n++;
	}
	temp = 1;
	for(int t = 0; t < n; t++)
		temp = temp * 10;
	for(int t = 0; t < 10; t++)
	{
		if(num == (t * num * num) % temp)
			return t;
	}
	
	return 0;
}
