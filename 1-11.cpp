#include <stdio.h>

int main(int argc, char * argv[])
{
	int xs, zs;
	char ch;
	
	scanf("%d %d%c", &xs, &zs, &ch);
		if(zs == 0 && xs == 0)
		{
			printf("0 0");
			return 0;
		}
	printf("%d %d", xs * zs, zs - 1);
	if(ch != ' ')
		return 0;
	while(1)
	{
		scanf("%d %d%c", &xs, &zs, &ch);
		if(zs <= 0)
			break;
		printf(" %d %d", xs * zs, zs - 1);
		if(ch != ' ')
			break;
	}
	
	return 0;
} 
