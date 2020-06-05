#include <stdio.h>

int main(int argc, char * argv[])
{
	char sentence[81] = "";
	int index = 0;
	
	scanf("%s", sentence);
	for(int t = 0; t < 81; t++)
		if(sentence[t] == ' ')
			sentence[t] = '\0';
	for(int t = 79; t >= 0; t--)
	{
		if(sentence[t] == '\0' && sentence[t + 1] != '\0')
		{
			printf("%s", sentence[t + 1]);
		}
		printf(" %d ", t);
	}
	
	return 0;
}
