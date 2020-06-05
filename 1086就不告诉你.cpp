#include <iostream>
#include <cstdio>

using namespace std;
int main(void)
{
	int a, b, c, count = 0, num;
	scanf("%d %d", &a, &b);
	c = a * b;
	while(c != 0)
	{
		c = c / 10;
		count++;
	}
	c = a * b;
	if(c == 0)
	{
		printf("0\n");
		return 0;
	}
	int list[count];
	for(int t = count - 1; t >= 0; t--)
	{
		num = c;
		for(int i = 0; i < t; i++)
			num = num / 10;
		list[t] = num % 10;
	}
	int flag = 0;
	for(int t = 0; t < count; t++)
	{
		if(list[t])
			flag = 1;
		if(flag)
			printf("%d", list[t]);
	}
	printf("\n");
		
	return 0;
}
