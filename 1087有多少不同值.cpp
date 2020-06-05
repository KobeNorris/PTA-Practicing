#include <iostream>
#include <cstdio>

int main(void)
{
	int current = -1, max, sum = 0;
	scanf("%d", &max);
	for(int t = 1; t <= max; t++)
	{
		if(current != (t/2 + t/3 + t/5))
			sum++;
		current = t/2 + t/3 + t/5;
	}
	printf("%d\n", sum);
	
	return 0;
}
