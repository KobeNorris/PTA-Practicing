#include <stdio.h>

int main(int argc, char * argv[])
{
	int b = 0, s = 0, n = 0, num;
	
	scanf("%d", &num);
	getchar();
	b = num / 100;
	s = (num - b * 100) / 10;
	n = (num - b * 100 - s * 10);
	for(; b > 0; b--)
		printf("B");
	for(; s > 0; s--)
		printf("S");
	for(int t = 1; t <= n; t++)
		printf("%d", t);
	printf("\n");
	
	return 0;
} 
