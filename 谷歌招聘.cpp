#include <stdio.h>

void Print(int num, int K);
int Take(char * Number, int K, int t);
int isPrime(int num);
int main(int argc, char * argv[])
{
	int L, K, num;
	
	scanf("%d %d", &L, &K);
	getchar();
	char Number[L + 1];
	scanf("%s", Number);
	if(K > L)
	{
		printf("404");
		return 0;
	}
	for(int t = 0; t < (L - K + 1); t++)
	{
		num = Take(Number, K, t);
		if(isPrime(num))
		{
			Print(num, K);
			return 0;
		}
	}
	printf("%d", 404);
	
	return 0;
}

int isPrime(int num)
{
	int n = 2;
	
	if(num == 1)
		return 0;
	if(num == 2)
		return 1;
	while(n * n <= num)
	{
		if(num % n == 0)
			return 0;
		n++;
	}
	
	return 1;
}

int Take(char * Number, int K, int t)
{
	int n = 0; 
	
	for(int i = 0; i < K; i++)
		n = n * 10 + (Number[i + t] - 48);
		
	return n;
}

void Print(int num, int K)
{
	char word[K + 1];
	
	for(int t = K - 1; t >= 0; t--)
	{
		word[t] = (num % 10) + 48;
		num = num / 10;
	}
	word[K] = '\0';
	printf("%s", word);
	
	return;
}
