#include <cstdio>

using namespace std;
int check(int a, int b,int x, int y);
int main(void)
{
	int my, x, y, a, b;
	double c;
	scanf("%d%d%d", &my, &x, &y);
	for(a = 99; a > 9; a--)
	{
		b = a % 10 * 10 + a / 10;
		if(a > b)
		{
			if((x * b) == ((a - b) * y))
			{
				c = (1.0 * b) / (double)y;
				break;
			}
		}
		else
		{
			if((x * b) == ((b - a) * y))
			{
				c = (1.0 * b) / (double)y;
				break;
			}
		}
	}
	if(a <= 9)
		printf("No Solution");
	else
	{
		printf("%d", my);
		if(my < a)
			printf(" Cong");
		else if(my == a)
			printf(" Ping");
		else
			printf(" Gai");
		if(my < b)
			printf(" Cong");
		else if(my == b)
			printf(" Ping");
		else
			printf(" Gai");
		if(my - c <= 0.001)
			printf(" Ping");
		else if(my > c)
			printf(" Gai");
		else
			printf(" Cong");
	}
	printf("\n");
	
	return 0;
}
