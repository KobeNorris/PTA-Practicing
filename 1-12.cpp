#include <stdio.h>

int main(int argc, char * argv[])
{
	long long a, b, c;
	int count;
	scanf("%d", &count);
	
	scanf("%lld%lld%lld", &a, &b, &c);
	if((a + b) > c)
		printf("Case #%d: true\n", 1);
	else
		printf("Case #%d: false\n", 1);
	for(int t = 2; t <= count; t++)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		if((a + b) > c)
			printf("Case #%d: true\n", t);
		else
			printf("Case #%d: false\n", t);
	}
	
	return 0;
}
