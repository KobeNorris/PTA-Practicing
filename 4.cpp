#include <cstdio>

using namespace std;

int findprime(int n);
int isprime(int n);
int main(void)
{
	int num;
	
	scanf("%d", &num);
	if(isprime(num))
	{
		if(isprime(num - 6))
		{
			printf("Yes\n%d", num - 6);
			return 0;
		}
		else if(isprime(num + 6))
		{
			printf("Yes\n%d", num + 6);
			return 0;
		}
		else
		{
			printf("No\n%d", findprime(num));
			return 0;
		}
	}
	else
		printf("No\n%d", findprime(num));
	
	return 0;
}

int findprime(int n)
{
	while(1)
	{
		n++;
		if(isprime(n))
			return n;
	}
}

int isprime(int n)
{
	if(n <= 1)
		return 0;
	for(int t = 2; t*t <= n; t++)
	{
		if(n % t == 0)
			return 0;
	}
	
	return 1;
}
