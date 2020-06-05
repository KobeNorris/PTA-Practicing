#include <stdio.h>

int prime(int n);

int main(int agrc, char * argv[])
{
	int num, n, count = 0;
	scanf("%d", &num);
	getchar();
	for(n = 3; n <= num; n = n + 2)
	{
		if((prime(n - 2) == 1) && (prime(n) == 1))
		{
			//printf("%d -- %d\n", n - 2, n);
			count++;
		}
	}
	printf("%d\n", count);
	
	return 0;
}

int prime(int n)
{
	int i = 2;
	
	if(n == 1)
		return 0;
	if(n == 2)
		return 1;
	if(n % i == 0)
		return 0;
	i++;
	while(i*i <= n)
	{
		if(n % i == 0)
			return 0;
		i = i + 2;
	}

	return 1;
}
